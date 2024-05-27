//
// Created by iamshri on 27/05/24.
//

#include <iostream>

// Recursive function to calculate the factorial of a non-negative integer
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n * factorial(n - 1)
        return n * factorial(n - 1);
    }
}

int main() {
    // Test the factorial function with different values
    int values[] = {0, 1, 2, 5, 10};
    int numValues = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < numValues; ++i) {
        int val = values[i];
        std::cout << "Factorial of " << val << " is " << factorial(val) << std::endl;
    }

    return 0;
}

//** Output **
//Factorial of 0 is 1
//Factorial of 1 is 1
//Factorial of 2 is 2
//Factorial of 5 is 120
//Factorial of 10 is 3628800
//** Output **