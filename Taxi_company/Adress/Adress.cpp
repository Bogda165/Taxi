#include "Adress.hpp"
#include <iomanip>

Adress::Adress(){
    street = "None";
    //house = 0;
    //postcode = 10000;
    
    city = "None";
    country = "None";
}
Adress::Adress(string _country, string _city, string _street, double _longitude, double _latitude){
    setStreet(_street);
    setCountry(_country);
    setCity(_city);
}

void Adress::setCity(string _city){
    if(_city.length() <= 0){
        
    }else{
        city = _city;
    }
}


void Adress::setStreet(string _street){
    if(_street.length() <= 0){
        
    }else{
        street = _street;
    }
}

void Adress::setCountry(string _coutnry){
    if (_coutnry.length() <= 0){
        
    }else{
        country = _coutnry;
    }
}
void Adress::setLong(double _longitude){
    if(_longitude < -180 && _longitude > 180){
        
    }else{
        longitude = _longitude;
    }
}
void Adress::setLat(double _latitude){
    if(_latitude < -90 && _latitude > 90){
        
    }else{
        latitude = _latitude;
    }
}

string Adress::getCity()const{
    return city;
}
string Adress::getCountry()const{
    return country;
}
string Adress::getStreet()const{
    return street;
}

void Adress::showInfo()const{
    std::cout << country << "-" << city << "-" << street << std::endl << "  Coordinates: " << std::setprecision(7) << latitude << " " << std::setprecision(7) << longitude << std::endl;
}

std::istream& operator>>(std::istream& is, Adress& obj){
    string tmp;
    double tmpD;
    std::cout << "Enter country : ";
    is >> tmp;
    obj.setCountry(tmp);
    std::cout << "Enter city : ";
    is >> tmp;
    obj.setCity(tmp);
    std::cout << "Enter street : ";
    is >> tmp;
    obj.setStreet(tmp);
    std::cout << "Coordinates:\n";
    std::cout << "  Enter latitude: ";
    is >> tmpD;
    obj.setLat(tmpD);
    std::cout << "  Enter longitude: ";
    is >> tmpD;
    obj.setLong(tmpD);
    return is;
}
