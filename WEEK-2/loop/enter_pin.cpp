//
// Created by Samuel Adebayo on 14/05/24.
//
using namespace std;
#include <iostream>


int main () {
    int pin, tries = 0;
    cout << "Enter your imaginary bank pin: \n";
    cin >> pin;
    while (pin != 1234 && tries < 3){
            cout << "Invalid pin, try again: \n";
            cin >> pin;
            tries++;
        }
    if (pin == 1234){
        cout << "Welcome to your account\n";
    } else {
        cout << "Account blocked\n";
    }
}