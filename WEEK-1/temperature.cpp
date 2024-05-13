//
// Created by iamshri on 04/05/24.
//
#include <iostream>
#include "temperature.h"

double temp_conversion_celcius(double temp_fahrenheit){
    double temperature_in_celcius = (temp_fahrenheit - 32) / 1.8;
    return temperature_in_celcius;
}