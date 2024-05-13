#include <iostream>
#include <cmath> // For sqrt() and pow()

using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Get the coefficients of the equation
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Calculate the discriminant
    discriminant = b*b - 4*a*c;

    // Determine the nature of the roots based on the discriminant
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        cout << "Roots are real and the same." << endl;
        cout << "Root = " << root1 << endl;
    } else {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and different." << endl;
        cout << "Real part = " << realPart << endl;
        cout << "Imaginary part = " << imaginaryPart << "i" << endl;
    }

    return 0;
}
