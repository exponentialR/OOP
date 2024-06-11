//
// Created by Samuel Adebayo on 11/06/2024.
//

using namespace std;
#include "iostream"

class Ship{
    string Make;
    string Color;
    int Year;
    string Model;
    int Number_of_Anchors;


public:
    Ship(){
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
        Number_of_Anchors = 0;
    }

    Ship(string mk, string col, int yr, string mdl, int na){
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
        Number_of_Anchors = na;
    }

    void print_details(){
        cout << "Manufacturer: " << Make << endl;
        cout << "Color: " << Color << endl;
        cout << "Year: " << Year << endl;
        cout << "Model: " << Model << endl;
        cout << "Number of Anchors: " << Number_of_Anchors << endl;
    }
};

int main(){
    Ship ship("Harland and Wolff, Belfast", "Black and whilte",
              1912, "RMS Titanic", 3);
    ship.print_details();
}
