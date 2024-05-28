#include "Person.h"

int main() {
    Person person1("Alice", 30, "Female");
    person1.display();

    Person person2;
    person2.setName("Bob");
    person2.setAge(25);
    person2.setGender("Male");
    person2.display();

    person1.updateAge(31);
    person1.display();

    if (person1.compareAge(person2)) {
        std::cout << "Alice and Bob are the same age.\n";
    } else {
        std::cout << "Alice and Bob are different ages.\n";
    }

    return 0;
}
