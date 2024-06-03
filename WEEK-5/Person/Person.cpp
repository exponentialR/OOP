#include "Person.h"
#include <iostream>

Person::Person() : name("Unknown"), age(0), gender("Unknown") {}

Person::Person(std::string nm, int ag, std::string gnd) : name(nm), age(ag), gender(gnd) {}

Person::~Person() {
    std::cout << "Person destroyed: " << name << "\n";
}

void Person::setName(const std::string& nm) {
    name = nm;
}

void Person::setAge(int ag) {
    age = ag;
}

void Person::setGender(const std::string& gnd) {
    gender = gnd;
}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

std::string Person::getGender() const {
    return gender;
}

void Person::display() const {
    std::cout << "Person: " << name << ", Age: " << age << ", Gender: " << gender << "\n";
}

void Person::updateAge(int newAge) {
    age = newAge;
}

bool Person::compareAge(const Person& other) const {
    return age == other.getAge();
}
