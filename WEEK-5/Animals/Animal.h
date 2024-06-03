//
// Created by vboxuser on 28/05/2024.
//

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
private:
    std::string species;
    int age;
    double weight;

public:
    Animal();
    Animal(std::string sp, int ag, double wt);
    ~Animal();

    void setSpecies(const std::string& sp);
    void setAge(int ag);
    void setWeight(double wt);

    std::string getSpecies() const;
    int getAge() const;
    double getWeight() const;

    void display() const;
    void updateWeight(double newWeight);
    bool compareWeight(const Animal& other) const;
};

#endif // ANIMAL_H

