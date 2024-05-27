//
// Created by iamshri on 27/05/24.
//

#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 10;

    std::cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swap(num1, num2);

    std::cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
