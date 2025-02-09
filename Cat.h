#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    int age;
    string color;
    int patitas;
    float peso;

    Cat(int catAge, string catColor, int catPatitas, float catPeso);
    ~Cat();

    void meow();
    float damePeso();
    void dormido();
};

#endif