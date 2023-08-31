#include "Taxi.hpp"

Taxi::Taxi(){
    name = "None";
    surname = "None";
    working = false;
    number = "AX0000BC";
}
Taxi::Taxi(string _name, string _surname, Car _vehicle, bool _working, string _number){
    cout << "Object creation...\n";
    setVehicle(_vehicle);
    setName(_name);
    setSurname(_surname);
    working = _working;
    setNumber(_number);
    if(working){
        Adress tmp;
        cin >> tmp;
        location = tmp;
    }
    cout << "Object created.\n";
}

void Taxi::setVehicle(Car _vehicle){
    vehicle = _vehicle;
}
void Taxi::setName(string _name){
    if(_name.length() <= 0){
        
    }else{
        name = _name;
    }
}
void Taxi::setSurname(string _surname){
    if(_surname.length() <= 0){
        
    }else{
        surname = _surname;
    }
}

void Taxi::setAdress(Adress _location){
    if(!working){
        
    }else{
        location = _location;
    }
}

void Taxi::setWorking(bool _working){
    if(_working && !working){
        working = _working;
        Adress tmp;
        cout << "Enter location:\n";
        cin >> tmp;
        setAdress(tmp);
        cout << "Driver " << surname << " " << name << " on the car "<< number << " left\n";
    }else if(!_working && working){
        working = _working;
        location = Adress();
        cout << "Driver " << surname << " " << name << " on the car "<< number << " arrived\n";
    }
}
void Taxi::setNumber(string _number){
    if(_number.length() != 8){
        
    }else{
        number = _number;
    }
}


string Taxi::getName()const{
    return name;
}
string Taxi::getSurname()const{
    return surname;
}

Car Taxi::getVehicle()const{
    return vehicle;
}
Adress Taxi::getLocation()const{
    if (working){
        return location;
    }else{
        return Adress();
    }
}
bool Taxi::getWorking()const{
    return working;
}
string Taxi::getNumber()const{
    return number;
}

void Taxi::showInfo_for_workers()const{
    cout << "------------Taxi------------\n";
    cout << "   Dirvers name: " << name << endl;
    cout << "   Driver surname: " << surname << endl;
    cout << endl;
    cout << "   Driver " << ((working)? "is":"isn't") << " working\n";
    if(working){
        cout << "   His location : ";
        location.showInfo();
    }
    vehicle.show();
    cout << "   Vehicles's number : " << number << endl;
    
}

void Taxi::showInfo_for_customers()const{
    cout << "------------Taxi------------\n";
    cout << "   Dirvers name: " << name << endl;
    cout << "   Driver surname: " << surname << endl;
    cout << endl;
    cout << "   Driver " << ((working)? "is":"isn't") << " working\n";
    if(working){
        cout << "   His location : ";
        location.showInfo();
    }
    vehicle.showC();
    cout << "   Vehicle's number : " << number << endl;
}

istream& operator>>(istream& is, Taxi& obj){
    string tmp;
    int tmp2;
    //garage

    Car item1("Collora", "Toyota", 180, 12.6, 1735, "white", 4, 27350, Date(12, 4, 2018), "C", Engine("Bensin", 4, "V", 99, 128), 4);
    Car item2("Fiest", "Ford", 230, 10.5, 1217, "blue", 5, 32700, Date(1, 1, 2022), "A", Engine("Bensin", 3, "W", 197, 320), 5);
    Car item3("M5 Competition", "BMW", 305, 3.3, 1970, "black", 4, 111850, Date(1, 3, 2021), "S", Engine("Bensin", 8, "V", 617, 750), 4);
    cout << "Reading Taxi: \n";
    
    cout << "   Enter driver's name: ";
    is >> tmp;
    obj.setName(tmp);
    cout << "   Enter driver's surname: ";
    is >> tmp;
    obj.setSurname(tmp);
    cout << "   Enter driver's number: ";
    is >> tmp;
    obj.setNumber(tmp);
    cout << "   Creation of drivers car :\n";
    cout << "   You can choose from cars in our garage: \n";
    cout << "       1.Toyota Carolla" << endl;
    cout << "       2.Ford Fiesta" << endl;
    cout << "       3.BMW M5" << endl;
    cout << "       0.Create your own" << endl;
    cout << "   ";
    is >> tmp2;
    if(tmp2 == 1){
        obj.setVehicle(item1);
    }else if(tmp2 == 2){
        obj.setVehicle(item2);
    }else if(tmp2 == 3){
        obj.setVehicle(item3);
    }else if(tmp2 == 0){
        Car tmpCar;
        cin >> tmpCar;
        obj.setVehicle(tmpCar);
    }
    cout << "Taxi created\n";
    
    return is;
}
