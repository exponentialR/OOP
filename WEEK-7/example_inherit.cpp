//
// Created by Samuel Adebayo on 11/06/2024.
//
class Vehicle{
protected:
    string Make;
    string Color;
    int Year;
    string Model;

public:
    Vehicle(){
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
    }

    Vehicle(string mk, string col, int yr, string mdl){
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
    }

    void print_details(){
        cout << "Manufacturer: " << Make << endl;
        cout << "Color: " << Color << endl;
        cout << "Year: " << Year << endl;
        cout << "Model: " << Model << endl;
    }
};

int main(){
    Vehicle v("Ford Australia", "Yellow", 2008, "Falcon");
    v.print_details();
}

