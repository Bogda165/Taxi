#pragma once
#include <iostream>
#include <string>
using namespace std;

class Engine{
    string type; // Bensin, Disle, Gass, Electic
    int cylinders; // {-1, 16} / 0
    string cylinders_p; // V, W, Flat, Others
    int hp;
    int torque;
    
public:
    Engine(){
        type = "Bensin";
        cylinders = 12;
        cylinders_p = "V";
        hp = 250;
        torque = 350;
    }
    Engine(string _type, int _cylinders, string _cylinders_p, int _hp, int _torque){
        type = (string::npos != string("BensinDiselGassElectric").find(_type))? _type : "Benisn";
        if(_cylinders < 16 && _cylinders > 0){
            if(type != "Electric"){
                cylinders = _cylinders;
            }else{
                cylinders = -1;
            }
        }else{
            cylinders = 4;
        }
        if(type != "Electric"){
            cylinders_p = (string::npos != string("VWFlatOthers").find(_cylinders_p))? _cylinders_p : "V";
        }else{
            cylinders_p = "None";
        }
        hp = _hp;
        torque = _torque;
    }
    
    void setType(string _type){
        type = (string::npos != string("BensinDiselGassElectric").find(_type))? _type : type;
        if(type == "Electric"){
            cylinders = -1;
            cylinders_p = "None";
        }
    }
    void setCylinders(int _cylinders){
        if(_cylinders < 16 && _cylinders > 0){
            if(type != "Electric"){
                cylinders = _cylinders;
            }else{
                cylinders = -1;
            }
        }
    }
    void setCylinders_p(string _cylinders_p){
        if(type != "Electric"){
            cylinders_p = (string::npos != string("VWFlatOthers").find(_cylinders_p))? _cylinders_p : cylinders_p;
        }else{
            cylinders_p = "None";
        }
    }
    void setHp(int _hp){
        hp = _hp;
    }
    void setTorque(int _torque){
        torque = _torque;
    }
    
    
    string getType()const{
        return type;
    }
    string getCylinders_p()const{
        return cylinders_p;
    }
    int getCylinders()const{
        return cylinders;
    }
    int getHp()const{
        return hp;
    }
    int getTorque()const{
        return torque;
    }
    
    void showInfo()const{
        cout << "  -----------Engine-----------\n";
        cout << "   Hourse power : " << hp << endl;
        cout << "   Torque : " << torque << "n/m\n";
        cout << "   Type : " << type;
        if (type != "Electric"){
            cout << " " << cylinders_p << "-" << cylinders;
        }
        cout << endl;
        cout << "  ----------------------------\n";
    }
};
