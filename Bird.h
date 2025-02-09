#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include <string>
using namespace std;

class Bird {
public:
    int age;
    string color;
    string raza;

    Bird(int birdAge, string birdColor, string birdRaza);
    ~Bird();
    
    void pico();
    string dameRaza();
};

#endif