#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Adress{
    string street;
    double longitude;
    double latitude;
    string city;
    string country;
    
public:
    Adress();
    Adress(string _country, string _city, string _street, double _longitude, double _latitude);
    
    void setStreet(string _street);
    void setLong(double _longitude);
    void setLat(double _latitude);
    void setCity(string _city);
    void setCountry(string _coutnry);
    
    string getStreet()const;
    double getLong()const;
    double getLatitude()const;
    string getCity()const;
    string getCountry()const;
    
    void showInfo()const;
    friend std::istream& operator >> (std::istream& is, Adress& obj);
    
};
