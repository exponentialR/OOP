//
// Created by vboxuser on 28/05/2024.
//

#include "Car.h"

int main() {
    Car car1("Honda", "Civic", 2020);
    car1.display();

    Car car2;
    car2.setMake("Toyota");
    car2.setModel("Camry");
    car2.setYear(2021);
    car2.display();

    return 0;
}



