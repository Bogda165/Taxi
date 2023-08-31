#pragma once
#include "Vehicle.hpp"
#include "Engine.hpp"

class Car: public Vehicle{
    string type_c; // "ABCDEFMSJ"
    Engine engine;
    int dors_n;
public:
    Car();
    Car(string _name, string _manufacturer, double _speed_max, double _racing, double _weight, string _color, int _passengers, double _price, Date _creation, string _type_c, Engine _engine, int _dors_n);
    
    void setType_c(string _type_c);
    void setEngine(Engine _engine);
    void setDors_n(int _dors_n);
    
    string getType_c()const;
    Engine getEngine()const;
    int getDors_n()const;
    
    void showC()const;
    void show()const override;
    string type()const override;
};
