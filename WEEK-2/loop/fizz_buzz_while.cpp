//
// Created by iamshri on 14/05/24.
//
using namespace std;
//
#include <iostream>
//#include <string>
int main () {
    int i = 0;
    while (i < 100){
        // use ternary operator to check if i is divisible by 3 and 5
        cout << (i % 3 == 0 && i % 5 == 0 ? "FizzBuzz\n" : (i % 3 == 0 ? "Fizz\n" : (i % 5 == 0 ? "Buzz\n" : to_string(i) + "\n")));
        i++;

    }

}