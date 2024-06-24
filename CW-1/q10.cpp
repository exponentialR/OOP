//
// Created by iamshri on 03/06/24.
//
//q10
// Path: CW-1/q10.cpp
// What will be the output of the following code snippet?

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    int z = 15;
    int *p = &x;
    int *q = &y;
    int *r = &z;
    cout << *p << " " << *q << " " << *r << endl;
    p = q;
    cout << *p << " " << *q << " " << *r << endl;
    q = r;
    cout << *p << " " << *q << " " << *r << endl;
    r = p;
    cout << *p << " " << *q << " " << *r << endl;
    return 0;
}



// 5 10 15