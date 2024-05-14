//
// Created by iamshri on 14/05/24.
//
using namespace std;
#include <iostream>


int main () {
    int guess;
    cout << "I have a number between 1 and 10\n";
    cout << "Guess a number between 1 and 10: ";
    cin >> guess;
    int tries = 0;


    // allow user 50 tries to guess the number
    while (guess != 5 && tries < 50){
        cout << "Wrong guess, try again: ";
        cin >> guess;
        tries++;
    }
    if (guess == 5){
        cout << "Congratulations, you guessed right\n";
    } else {
        cout << "You have exhausted your tries\n";
    }
}