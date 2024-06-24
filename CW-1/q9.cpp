//
// Created by iamshri on 03/06/24.
//
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) continue;
        if (i == 4) break;
        cout << i << " ";
    }
    return 0;
}
// What will be the output of the following code snippet?

// 0 1 3


