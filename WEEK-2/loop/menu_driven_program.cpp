#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    while (true) {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform action based on user's choice
        switch (choice) {
            case 1:
                cout << "Enter two numbers to add: ";
                cin >> num1 >> num2;
                cout << "The sum is: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Enter two numbers to subtract: ";
                cin >> num1 >> num2;
                cout << "The difference is: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Enter two numbers to multiply: ";
                cin >> num1 >> num2;
                cout << "The product is: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Enter two numbers to divide: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    cout << "The quotient is: " << num1 / num2 << endl;
                } else {
                    cout << "Division by zero is not allowed.\n";
                }
                break;
            case 5:
                cout << "Quitting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
