//
// Created by iamshri on 14/05/24.
//
//
#include <iostream>
using namespace std;

int main () {
    // infinite loop uncomment to run
//    int alarm = 9;
//    while (alarm> 8){
//        cout << "ding\n";
//    }
    // do while loop
    int count = 0;
    do {
        cout << "counting " << count << endl;
        count++;
    } while (count < 10);

    // while loop
    int i = 0;
    while (i < 10) {
        cout << "counting " << i << endl;
        i++;
    }
    
}