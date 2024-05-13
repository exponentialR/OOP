//
// Created by qub-hri on 13/05/24.
//

#include "currency_ass.h"

#include <iostream>
using namespace std;
int main() {
    double pesos ;
    double reais;
    double soles;
    double dollars;

    double const pesos_conv = 0.00032;
    double const reais_conv = 0.27;
    double const soles_conv = 0.3;

    cout << "Please Enter number of Colombian Pesos: " ;
    cin >> pesos;
    cout << "Please Enter number of Colombian Reais: ";
    cin >> reais;
    cout << "Please Enter number of Colombian Soles: " ;
    cin >> soles;

    dollars = (pesos_conv * pesos) + (reais_conv * reais) + (soles_conv * soles);

    cout << "US Dollars = $ " << dollars;

}