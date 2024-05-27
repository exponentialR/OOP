//
// Created by iamshri on 27/05/24.
//

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    string studentID;
    float GPA;

public:
    // Setter methods
    void setName(const string& newName);
    void setAge(int newAge);
    void setStudentID(const string& newStudentID);
    void setGPA(float newGPA);

    // Getter methods
    string getName() const;
    int getAge() const;
    string getStudentID() const;
    float getGPA() const;

    // Method to display student details
    void displayDetails() const {
        cout << "Name: " << name << "\n"
             << "Age: " << age << "\n"
             << "Student ID: " << studentID << "\n"
             << "GPA: " << GPA << "\n";
    }

    // Method to update GPA
    void updateGPA(float newGPA) {
        GPA = newGPA;
    }
};

// Define setter methods outside the class
void Student::setName(const string& newName) {
    name = newName;
}

void Student::setAge(int newAge) {
    age = newAge;
}

void Student::setStudentID(const string& newStudentID) {
    studentID = newStudentID;
}

void Student::setGPA(float newGPA) {
    GPA = newGPA;
}

// Define getter methods outside the class
string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

string Student::getStudentID() const {
    return studentID;
}

float Student::getGPA() const {
    return GPA;
}


int main() {
    // Creating Student objects
    Student student1;
    Student student2;

    // Setting attributes for student1
    student1.setName("Alice Johnson");
    student1.setAge(20);
    student1.setStudentID("S12345");
    student1.setGPA(3.8);

    // Setting attributes for student2
    student2.setName("Bob Smith");
    student2.setAge(22);
    student2.setStudentID("S67890");
    student2.setGPA(3.6);

    // Displaying student details
    cout << "Student 1 Details:\n";
    student1.displayDetails();

    cout << "\nStudent 2 Details:\n";
    student2.displayDetails();

    // Extra Credit: Updating GPA
    student1.updateGPA(3.9);
    cout << "\nUpdated GPA for Student 1:\n";
    student1.displayDetails();

    return 0;
}
