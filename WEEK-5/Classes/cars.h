//
// Created by vboxuser on 28/05/2024.
//

#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    Car();
    Car(std::string mk, std::string mdl, int yr);
    ~Car();

    void setMake(const std::string& mk);
    void setModel(const std::string& mdl);
    void setYear(int yr);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;

    void display() const;
};

#endif // CAR_H

