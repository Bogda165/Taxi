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
