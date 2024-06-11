//
// Created by vboxuser on 11/06/2024.
//
class Car{
    string Make;
    string Color;
    int Year;
    string Model;
    string trunk_size;


public:
    Car(){
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
        trunk_size = "";
    }

    Car(string mk, string col, int yr, string mdl, string ts){
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
        trunk_size = ts;
    }

    void print_details(){
        cout << "Manufacturer: " << Make << endl;
        cout << "Color: " << Color << endl;
        cout << "Year: " << Year << endl;
        cout << "Model: " << Model << endl;
        cout << "Trunk size: " << trunk_size << endl;
    }
};

int main(){
    Car car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car.print_details();
}