#pragma once
#include "Car/Car.hpp"
#include "Adress/Adress.hpp"

class Taxi{
    Car vehicle;
    string number;
    string name;
    string surname;
    Adress location;
    bool working;
public:
    Taxi();
    Taxi(string _name, string _surname, Car _vehicle, bool _working, string _number);
    
    void setVehicle(Car _vehicle);
    void setName(string _name);
    void setSurname(string _surname);
    void setAdress(Adress _location);
    void setWorking(bool _working);
    void setNumber(string _number);
    
    Car getVehicle()const;
    string getName()const;
    string getSurname()const;
    Adress getLocation()const;
    bool getWorking()const;
    string getNumber()const;
    
    void showInfo_for_workers()const;
    void showInfo_for_customers()const;
    
    friend istream& operator>>(istream& is, Taxi& obj);
};
