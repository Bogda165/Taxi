//
//  main.cpp
//  Taxi_company
//
//  Created by Богдан Коваль on 31.08.2023.
//

#include "Taxi.hpp"
#include "Adress/Adress.hpp"
#include "Adress/Adress.cpp"
#include "Car/Car.cpp"
#include "Car/Vehicle.cpp"
#include "Company.hpp"

int main(int argc, const char * argv[]) {
    // addition
    Engine lamb("Bensin", 10, "V", 610, 560);
    //cars
    
    Car huracan("Huracan", "Lamborghini", 325, 3, 1339, "Yellow", 2, 241945, Date(12, 1, 2014), "S", lamb, 2);
    Car prius("Prius", "Toyota", 180, 10.4, 1495, "Grey", 6, 12071, Date(1, 4, 2016), "E", Engine("Electric", 0, "None", 99, 142), 5);
    Car passat("Passat", "Volkswagen", 205, 7.8, 1280, "Black", 4, 35710, Date(10, 10, 2021), "A", Engine("Disel", 4, "Other", 190, 210), 5);
    
    Car item1("Collora", "Toyota", 180, 12.6, 1735, "white", 4, 27350, Date(12, 4, 2018), "C", Engine("Bensin", 4, "V", 99, 128), 4);
    Car item2("Fiest", "Ford", 230, 10.5, 1217, "blue", 5, 32700, Date(1, 1, 2022), "A", Engine("Bensin", 3, "W", 197, 320), 5);
    Car item3("M5 Competition", "BMW", 305, 3.3, 1970, "black", 4, 111850, Date(1, 3, 2021), "S", Engine("Bensin", 8, "V", 617, 750), 4);
    
    //taxi
    Taxi item0("Damien", "Balzer", huracan, false, "FR2012HG");
    Taxi alex("Svider", "Alex", prius, false, "AA1525HF");
    Taxi roma("Lutaienko", "Roman", passat, false, "AX2006XA");
    
    //veriables
    Taxi tmp_taxi;
    Car tmp_car;
    Adress tmp_loc;
    Company company;
    
    string tmp, lol;
    bool stop = false;
    int tmp2;
    list<Taxi>::iterator theChosenOne;
    
    //prep
    company.addBeg(item0);
    company.addBeg(alex);
    company.addBeg(roma);
    
    //menu
    cout << "Menu-------------------\n";
    while(!stop){
        cout << "   For help) : ";
        company.showNumbers();
        cout << endl << "\n   1. Exit\n";
        cout << "   2. Rename company\n";
        cout << "   3. Add front\n";
        cout << "   4. Print for Customer\n";
        cout << "   5. Print for Workers\n";
        cout << "   6. Add before element\n";
        cout << "   7. Delete by number\n";
        cout << "   8. Change taxi(seconde menu)\n";
        cout << "   9. Show free taxi\n";
        cout << "   10. Show working taxi\n";
        cout << "\n   Enter your command \n       (For example: Add front | or | 3): ";
        
        getline(cin, tmp);
        cout << "   Your choise: " << tmp << endl;
        
        if(tmp == "1" || tmp == "Exit"){
            stop = true;
        }else if(tmp == "2" || tmp == "Rename company"){
            cout << "   Enter new name : ";
            cin >> tmp;
            company.setName(tmp);
            getline(cin, tmp);
        }else if(tmp == "3" || tmp == "Add front"){
            
            cout << "   Enter new taxi";
            cin >> tmp_taxi;
            company.addBeg(tmp_taxi);
            getline(cin, tmp);
        }else if(tmp == "4" || tmp == "Print for Customer"){
            
            company.showInfo();
        }else if(tmp == "5" || tmp == "Print for Workers"){
            
            company.showInfo(true);
        }else if(tmp == "6" || tmp == "Add before element"){
            
            cout << "   Enter car number of the car: ";
            cin >> tmp;
            cin >> tmp_taxi;
            company.addBefore(tmp, tmp_taxi);
            getline(cin, tmp);
        }else if(tmp == "7" || tmp == "Delete by number"){
            
            cout << "   Enter car number of the car: ";
            cin >> tmp;
            cout << "   Are you sure? y/n: ";
            cin >> lol;
            if(lol == "y"){
                company.del(tmp);
            }
            getline(cin, tmp);
        }else if(tmp == "8" || tmp == "Change taxi"){
//test 8
            //chose a car
            cout << "   Enter car number of the car: ";
            cin >> tmp;
            theChosenOne = company.find(tmp);

            //second menu
            tmp = "";
            stop = false;
            cout << "Changing taxi menu------------------\n";
            getline(cin, tmp);
            while(!stop){
                cout << endl << "\n   1. Exit\n";
                cout << "   2. Change car\n";
                cout << "   3. Change dirver's name\n";
                cout << "   4. Change driver's surname\n";
                cout << "   5. Send taxi\n";
                cout << "   6. Change taxi location\n";
                cout << "   7. Get taxi back\n";
                cout << "   8. Show taxi info\n";
                cout << "\n   Enter your command \n       (For example: Send taxi | or | 5): ";

                getline(cin, tmp);
                cout << "   Your choise: " << tmp << endl;
                
                if(tmp == "1" || tmp == "Exit"){
                    stop = true;
                }else if(tmp == "2" || tmp == "Change car"){
                    /*
                    cout << "Enter new car :\n";
                    cin >> tmp_car;
                    theChosenOne->setVehicle(tmp_car);
                     */
                    cout << "   Enter new car :\n";
                    cout << "   You can choose from cars from our garage: \n";
                    cout << "       1.Toyota Carolla" << endl;
                    cout << "       2.Ford Fiesta" << endl;
                    cout << "       3.BMW M5" << endl;
                    cout << "       0.Create your own" << endl;
                    cout << "   ";
                    cin >> tmp2;
                    if(tmp2 == 1){
                        theChosenOne->setVehicle(item1);
                    }else if(tmp2 == 2){
                        theChosenOne->setVehicle(item2);
                    }else if(tmp2 == 3){
                        theChosenOne->setVehicle(item3);
                    }else if(tmp2 == 0){
                        cin >> tmp_car;
                        theChosenOne->setVehicle(tmp_car);
                    }
                    getline(cin, tmp);
                }else if(tmp == "3" || tmp == "Change dirver's name"){
                    cout << "Enter new driver's name :\n";
                    cin >> tmp;
                    theChosenOne->setName(tmp);
                    getline(cin, tmp);
                }else if(tmp == "4" || tmp == "Change dirver's surname"){
                    cout << "Enter new driver's surname :\n";
                    cin >> tmp;
                    theChosenOne->setSurname(tmp);
                    getline(cin, tmp);
                }else if(tmp == "5" || tmp == "Send taxi"){
                    cout << "   Are you sure? y/n: ";
                    cin >> lol;
                    if(lol == "y"){
                        theChosenOne->setWorking(true);
                    }
                    getline(cin, tmp);
                }else if(tmp == "6" || tmp == "Change taxi location"){
                    if(theChosenOne->getWorking()){
                        cout << "Enter new location: \n";
                        cin >> tmp_loc;
                        theChosenOne->setAdress(tmp_loc);
                    }else{
                        cout << "   Firstly you should send taxi\n";
                    }
                    getline(cin, tmp);
                }else if(tmp == "7" || tmp == "Get taxi back"){
                    cout << "   Are you sure? y/n: ";
                    cin >> lol;
                    if(lol == "y"){
                        theChosenOne->setWorking(false);
                    }
                    getline(cin, tmp);
                }else if(tmp == "8" || tmp == "Show taxi info"){
                    theChosenOne->showInfo_for_workers();
                }else{
                    cout << "Error choise " << tmp << " doesn't exist\n";
                }
            }
            
            stop = false;
            cout << "Menu-------------------\n";
            
        }else if(tmp == "9" || tmp == "Show free taxi"){
            company.show_free();
        }else if(tmp == "10" || tmp == "Show working taxi"){
            company.show_working();
        }else{
            cout << "Error choise " << tmp << " doesn't exist\n";
        }
        cout << "Finish-----------------\n";
    }
    
    return 0;
}
