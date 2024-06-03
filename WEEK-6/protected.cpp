//
// Created by vboxuser on 03/06/2024.
//
class Base {
protected:
    int protectedData;

public:
    Base(int val) : protectedData(val) {}
};

class Derived : public Base {
public:
    Derived(int val) : Base(val) {}
    void increment() { protectedData++; }
};



