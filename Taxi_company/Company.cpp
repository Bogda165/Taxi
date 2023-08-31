//
//  Company.cpp
//  Taxi_company
//
//  Created by Богдан Коваль on 31.08.2023.
//

#include "Company.hpp"

Company::Company(){
    name = "None";
}
Company::Company(string _name){
    if (_name.length() == 0){
        
    }else{
        name = _name;
    }
}

void Company::setName(string _name){
    if (_name.length() == 0){
        
    }else{
        name = _name;
    }
}
string Company::getName()const{
    return name;
}
void Company::showInfo()const{
    cout << "----------Company-----------\n";
    cout << "Name: " << name << endl << endl;
    int pos = 1;
    if(list_t.size() == 0){
        cout << "You haven't got yet any taxi\n";
    }
    for(Taxi item : list_t){
        cout << "\nTaxi number " << pos << endl;
        item.showInfo_for_customers();
        pos ++;
    }
}
void Company::showInfo(bool what)const{
    cout << "----------Company-----------\n";
    cout << "Name: " << name << endl << endl;
    if(list_t.size() == 0){
        cout << "You haven't got yet any taxi\n";
    }
    int pos = 1;
    for(Taxi item : list_t){
        cout << "\nTaxi number " << pos << endl;
        item.showInfo_for_workers();
        pos ++;
    }
}

void Company::addBeg(Taxi obj){
    list_t.push_front(obj);
}

void Company::addBefore(string number, Taxi obj){
    list_t.insert(find(number), obj);
}
void Company::del(string number){
    list_t.erase(find(number));
}

list<Taxi>::iterator Company::find(string _number){
    list<Taxi>::iterator it;
    for(it = list_t.begin(); it != list_t.end(); it++){
        if(it->getNumber() == _number){
            break;
        }
    }
    if(it == list_t.end()){
        cout << "Error taxi with this number dosen't exist\n";
        cout << "   Enter car number of the car: ";
        cin >> _number;
        return find(_number);
    }
    return it;
}

void Company::showNumbers(){
    list<Taxi>::iterator it;
    for(it = list_t.begin(); it != list_t.end(); it++){
        cout << it->getNumber() << " ";
    }
    cout << endl;
}

void Company::show_working(){
    list<Taxi>::iterator it;
    cout << "Working taxi:\n";
    if(list_t.size() == 0){
        cout << "You still haven't got working taxi\n";
    }
    for(it = list_t.begin(); it != list_t.end(); it++){
        if(it->getWorking()){
            it->showInfo_for_workers();
            cout << endl;
        }
    }
}
void Company::show_free(){
    list<Taxi>::iterator it;
    cout << "   Free taxi:\n";
    if(list_t.size() == 0){
        cout << "You still haven't got free taxi\n";
    }
    for(it = list_t.begin(); it != list_t.end(); it++){
        if(!it->getWorking()){
            it->showInfo_for_customers();
            cout << endl;
        }
    }
}
