#include <iostream>
#include <string>
using namespace std;

int main() {
    string color;
    cout << "Enter traffic light color (red, yellow, green): ";
    cin >> color;

    if (color == "red") {
        cout << "Action: stop\n";
    } else if (color == "yellow") {
        cout << "Action: caution\n";
    } else if (color == "green") {
        cout << "Action: go\n";
    } else {
        cout << "Invalid color\n";
    }

    return 0;
}
