#include "Car.hpp"
Car::Car(){
    type_c = "A";
    dors_n = 2;
}
Car::Car(string _name, string _manufacturer, double _speed_max, double _racing, double _weight, string _color, int _passengers, double _price, Date _creation, string _type_c, Engine _engine, int _dors_n):
Vehicle(_name, _manufacturer, _speed_max, _racing, _weight, _color, _passengers, _price, _creation){
    if(string::npos != string("ABCDEFMSJ").find(_type_c)){
        type_c = _type_c;
    }else{
        type_c = "A";
    }
    engine = _engine;
    dors_n = (_dors_n >= 1)? _dors_n: 2;
}

void Car::setType_c(string _type_c){
    if(string::npos != string("ABCDEFMSJ").find(_type_c)){
        type_c = _type_c;
    }
}
void Car::setEngine(Engine _engine){
    engine = _engine;
}
void Car::setDors_n(int _dors_n){
    dors_n = (_dors_n >= 1)? _dors_n: 2;
}

string Car::getType_c()const{
    return type_c;
}
Engine Car::getEngine()const{
    return engine;
}
int Car::getDors_n()const{
    return dors_n;
}

string Car::type()const{
    return "Car";
}


void Car::show()const{
    cout << "--------------Car-------------\n";
    cout << "   Model : " << name << endl;
    cout << "   Manufacturer name : " << manufacturer << endl;
    cout << "   Color : " << color << endl;
    cout << "   Price : " << price << endl;
    cout << "   Creation date : " << creation.getDay() / 10 << creation.getDay() % 10 << "/" << creation.getMonth() / 10 << creation.getMonth() % 10 << "/" << creation.getYear() << endl;
    cout << "   Max speed : " << speed_max << "km/h" << endl;
    cout << "   Time from 1-100 km/h : " << racing << "s.\n";
    cout << "   Weight : " << weight << "kg." << endl;
    engine.showInfo();
    cout << "   Model type : " << type_c << endl;
    cout << "   Amount of the dors : " << dors_n << endl;
}


void Car::showC()const{
    cout << "--------------Car-------------\n";
    cout << "   Model : " << name << endl;
    cout << "   Manufacturer name : " << manufacturer << endl;
    cout << "   Color : " << color << endl;
    cout << "   Model type : " << type_c << endl;
    cout << "   Amount of the dors : " << dors_n << endl;
}
