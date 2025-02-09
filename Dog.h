#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
using namespace std;

class Dog{
public:
    int age;
    string raza;
    float peso;

    Dog(int dogAge, string dogRaza, float dogPeso);
    ~Dog();

    void guau();
    void sentarse();
};

#endif