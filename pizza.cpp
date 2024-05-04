//
// Created by iamshri on 04/05/24.
//
#include <iostream>
#include <string>

int pizza_code(){
    int length = 5;
    std::cout << length << std::endl;

    double pizza_price = 12.99;
    std::cout << pizza_price << std::endl;

    double x = 6.7;
    int y = int(x);
    std::cout << 'After conversion, ' << x << ' becomes ' << y << std::endl;

    std::string word = "Code";
    std::cout << word << std::endl;

    std::string name = word + "cademy";
    std::cout << name << std::endl;

    std::cout << "There are " << name.length()
    << " letters in " << name << std::endl;

    bool a = true;
    a = false;
    std::cout << a;
    return 0;
}