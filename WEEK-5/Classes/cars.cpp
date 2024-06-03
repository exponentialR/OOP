//
// Created by vboxuser on 28/05/2024.
//

#include "cars.h"
#include "Car.h"
#include <iostream>

// Constructor definitions
Car::Car() : make("Unknown"), model("Unknown"), year(0) {}
Car::Car(std::string mk, std::string mdl, int yr) : make(mk), model(mdl), year(yr) {}
// Destructor definition
Car::~Car() {
    std::cout << "Car destroyed: " << make << " " << model << "\n";
}
// Setter methods definitions
void Car::setMake(const std::string& mk) {
    make = mk;
}
void Car::setModel(const std::string& mdl) {
    model = mdl;
}
void Car::setYear(int yr) {
    year = yr;
}
// Getter methods definitions
std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

// Display method definition
void Car::display() const {
    std::cout << "Car: " << make << " " << model << " (" << year << ")\n";
}


