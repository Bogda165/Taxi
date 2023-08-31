#pragma once
#include "Taxi.hpp"
#include <list>


class Company{
    string name;
    list<Taxi> list_t;
public:
    Company();
    Company(string _name);
    
    void setName(string _name);
    string getName()const;
    void showInfo()const;
    void showInfo(bool what)const;
    void addBeg(Taxi obj);
    void addBefore(string number, Taxi obj);
    void del(string number);
    void show_free();
    void show_working();
    void showNumbers();
    list<Taxi>::iterator find(string _number);
    
    void sort_name();
    void sort_speed();
    void sort_price();
};
