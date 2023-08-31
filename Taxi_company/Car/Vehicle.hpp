#pragma once
#include <iostream>
#include <string>
#include "Date.hpp"
using namespace std;

class Vehicle{
protected:
    string name;
    string manufacturer;
    string color;
    double speed_max;
    double racing;
    double weight;
    double price;
    int passengers;
    Date creation;
public:
    Vehicle();
    Vehicle(string _name, string _manufacturer, double _speed_max, double _racing, double _weight, string _color, int _passengers, double _price, Date _creation);
    
    void setName(string _name);
    void setManufacturer(string _manufacturer);
    void setMaxSpeed(double _speed_max);
    void setRacing(double _racing);
    void setWeight(double _weight);
    void setColor(string _color);
    void setPassenger(int _passenger);
    void setPrice(double _price);
    void setDate(Date _creation);

    string getName()const;
    string getManufacturer()const;
    string getColor()const;
    double getMaxSpeed()const;
    double getRacing()const;
    double getWeight()const;
    double getPrice()const;
    int getPassengers()const;
    Date getDate()const;
    
    virtual void show()const = 0;
    virtual string type()const = 0;
};
