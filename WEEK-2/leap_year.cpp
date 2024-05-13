//
// Created by iamshri on 13/05/2024.
//
using namespace std;

int main() {
    int y = 0;
    cout << "Enter a year: \n";
    cin >> y;

    if (y < 1000 || y > 9999) {
        cout << "Invalid entry. \n";
    }

    else if (y%4 ==0 && y %100 !=0 || y % 400 ==0){
        cout << y;
        cout << "  falls on a leap year. \n";
    }
    else{
        cout << y;
        cout << "  is not a leap year. \n";
    }

}