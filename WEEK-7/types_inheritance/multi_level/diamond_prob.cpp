//
// Created by Samuel Adebayo on 11/06/2024.
//

#include<iostream>
using namespace std;

class A
{
protected:
    int ID;
public:
    A() : ID(0) { }
};

class B:  public A
{
public:
    int length;
};

class C:  public A
{
public:
    int radius;
};

class D: public B, public C
{
public:
    int getID()  {   return ID;  }
};

int main(void)
{
    D d;
    cout << d.getID();
    return 0;
}