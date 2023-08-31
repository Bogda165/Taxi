#include "Vehicle.hpp"

Vehicle::Vehicle(){
    name = "None";
    manufacturer = "None";
    color = "None";
    speed_max = 0;
    racing = -1;
    weight = 0;
    passengers = 0;
    price = 0;
}
Vehicle::Vehicle(string _name, string _manufacturer, double _speed_max, double _racing, double _weight, string _color, int _passengers, double _price, Date _creation){
    name = _name;
    manufacturer = _manufacturer;
    speed_max = (_speed_max > 0)?_speed_max : 1;
    racing = (_racing > 0 && speed_max > 100)?_racing: -1;
    weight = (_weight > 0)?_weight: -1;
    color = _color;
    passengers = (_passengers > 0)? _passengers: 1;
    price = _price;
    creation = _creation;
}

void Vehicle::setName(string _name){
    name = _name;
}
void Vehicle::setManufacturer(string _manufacturer){
    manufacturer = _manufacturer;
}
void Vehicle::setMaxSpeed(double _speed_max){
    speed_max = (_speed_max > 0)?_speed_max : speed_max;
}
void Vehicle::setRacing(double _racing){
    racing = (_racing > 0 && speed_max > 100)?_racing: -1;
}
void Vehicle::setWeight(double _weight){
    weight = (_weight > 0)?_weight: -1;
}
void Vehicle::setColor(string _color){
    color = _color;
}
void Vehicle::setPrice(double _price){
    price = _price;
}
void Vehicle::setPassenger(int _passengers){
    passengers = (_passengers > 0)? _passengers: 1;
}
void Vehicle::setDate(Date _creation){
    creation = _creation;
}

string Vehicle::getName()const{
    return name;
}
string Vehicle::getManufacturer()const{
    return manufacturer;
}
string Vehicle::getColor()const{
    return color;
}
double Vehicle::getMaxSpeed()const{
    return speed_max;
}
double Vehicle::getRacing()const{
    return racing;
}
double Vehicle::getWeight()const{
    return weight;
}
double Vehicle::getPrice()const{
    return price;
}
int Vehicle::getPassengers()const{
    return passengers;
}
Date Vehicle::getDate()const{
    return creation;
}
