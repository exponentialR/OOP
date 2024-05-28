#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string gender;

public:
    Person();
    Person(std::string nm, int ag, std::string gnd);
    ~Person();

    void setName(const std::string& nm);
    void setAge(int ag);
    void setGender(const std::string& gnd);

    std::string getName() const;
    int getAge() const;
    std::string getGender() const;

    void display() const;
    void updateAge(int newAge);
    bool compareAge(const Person& other) const;
};

#endif // PERSON_H
