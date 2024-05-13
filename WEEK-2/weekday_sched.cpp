#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter the number of the day (1=Monday, 7=Sunday): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Go to the gym\n"; break;
        case 2: cout << "Attend lecture\n"; break;
        case 3: cout << "Study at the library\n"; break;
        case 4: cout << "Work on group project\n"; break;
        case 5: cout << "Go to the cinema\n"; break;
        case 6: cout << "Visit family\n"; break;
        case 7: cout << "Take a rest day\n"; break;
        default: cout << "Invalid day\n"; break;
    }

    return 0;
}
