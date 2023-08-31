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

int main(int argc, const char * argv[]) {
    Car item1("Collora", "Toyota", 180, 12.6, 1735, "white", 4, 27350, Date(12, 4, 2018), "C", Engine("Bensin", 6, "V", 99, 128), 4);
    Taxi Bolt("Bohdan", "Koval", item1, true, "AX4046EC");
    Bolt.setWorking(false);
    Bolt.setWorking(false);
    Bolt.setWorking(true);
    //Bolt.setWorking(true);
    Bolt.showInfo_for_customers();
    return 0;
}
