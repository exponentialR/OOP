//
// Created by iamshri on 04/06/24.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> greetings = {"Hello", "World", "C++", "is", "awesome"};
    for (const string& word : greetings) {
        cout << word << " ";
    }
    return 0;
}


