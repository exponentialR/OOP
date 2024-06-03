//
// Created by vboxuser on 28/05/2024.
//

#include "Animal.h"
#include <iostream>

Animal::Animal() : species("Unknown"), age(0), weight(0.0) {}

Animal::Animal(std::string sp, int ag, double wt) : species(sp), age(ag), weight(wt) {}

Animal::~Animal() {
    std::cout << "Animal destroyed: " << species << "\n";
}

void Animal::setSpecies(const std::string& sp) {
    species = sp;
}

void Animal::setAge(int ag) {
    age = ag;
}

void Animal::setWeight(double wt) {
    weight = wt;
}

std::string Animal::getSpecies() const {
    return species;
}

int Animal::getAge() const {
    return age;
}

double Animal::getWeight() const {
    return weight;
}

void Animal::display() const {
    std::cout << "Animal: " << species << ", Age: " << age << ", Weight: " << weight << " kg\n";
}

void Animal::updateWeight(double newWeight) {
    weight = newWeight;
}

bool Animal::compareWeight(const Animal& other) const {
    return weight == other.getWeight();
}
