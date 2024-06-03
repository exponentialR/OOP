//
// Created by vboxuser on 28/05/2024.
//

#include "Student.h"
#include <iostream>

Student::Student() : name("Unknown"), id(0), gpa(0.0) {}

Student::Student(std::string nm, int id, double gpa) : name(nm), id(id), gpa(gpa) {}

Student::~Student() {
    std::cout << "Student destroyed: " << name << "\n";
}

void Student::setName(const std::string& nm) {
    name = nm;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setGpa(double gpa) {
    this->gpa = gpa;
}

std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

double Student::getGpa() const {
    return gpa;
}

void Student::display() const {
    std::cout << "Student: " << name << ", ID: " << id << ", GPA: " << gpa << "\n";
}

void Student::updateGpa(double newGpa) {
    gpa = newGpa;
}

bool Student::compareGpa(const Student& other) const {
    return gpa == other.getGpa();
}
