//
// Created by vboxuser on 28/05/2024.
//

#include "student.h"

int main() {
    Student student1("Alice", 1001, 3.8);
    Student student2("Bob", 1002, 3.6);
    Student student3("Charlie", 1003, 3.9);

    student1.display();
    student2.display();
    student3.display();

    student1.updateGpa(3.9);
    student1.display();

    if (student1.compareGpa(student2)) {
        std::cout << "Alice and Bob have the same GPA.\n";
    } else {
        std::cout << "Alice and Bob have different GPAs.\n";
    }

    return 0;
}
