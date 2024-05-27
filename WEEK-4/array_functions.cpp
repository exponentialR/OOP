//
// Created by iamshri on 27/05/24.
//

#include <iostream>

int sumArray(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

double averageArray(const int arr[], int size) {
    if (size == 0) return 0; // To avoid division by zero
    int sum = sumArray(arr, size);
    return static_cast<double>(sum) / size;
}

int main() {
    // Declare an array of integers
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Calculate the sum of the array elements
    int sum = sumArray(arr, size);
    // Calculate the average of the array elements
    double average = averageArray(arr, size);

    // Display the results
    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Average of array elements: " << average << std::endl;

    return 0;
}
