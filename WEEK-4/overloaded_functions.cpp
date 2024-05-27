//
// Created by iamshri on 27/05/24.
//
#include <iostream>
#include <cmath> // For M_PI constant

// Function to calculate the area of a circle
double area(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a rectangle
double area(double width, double height) {
    return width * height;
}

// Function to calculate the area of a triangle
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    // Test the area function with different shapes

    // Circle
    double radius = 5.0;
    std::cout << "Area of circle with radius " << radius << " is " << area(radius) << std::endl;

    // Rectangle
    double width = 4.0;
    double height = 6.0;
    std::cout << "Area of rectangle with width " << width << " and height " << height << " is " << area(width, height) << std::endl;

    // Triangle
    double base = 3.0;
    double triHeight = 7.0;
    std::cout << "Area of triangle with base " << base << " and height " << triHeight << " is " << area(base, triHeight, true) << std::endl;

    return 0;
}


/*
Area of circle with radius 5 is 78.5398
Area of rectangle with width 4 and height 6 is 24
Area of triangle with base 3 and height 7 is 10.5
 */