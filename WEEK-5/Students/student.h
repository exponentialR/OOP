//
// Created by vboxuser on 28/05/2024.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    int id;
    double gpa;

public:
    Student();
    Student(std::string nm, int id, double gpa);
    ~Student();

    void setName(const std::string& nm);
    void setId(int id);
    void setGpa(double gpa);

    std::string getName() const;
    int getId() const;
    double getGpa() const;

    void display() const;
    void updateGpa(double newGpa);
    bool compareGpa(const Student& other) const;
};

#endif // STUDENT_H
