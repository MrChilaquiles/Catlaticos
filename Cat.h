#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
using namespace std;

class Cat {
private:
    string name;
    int age;
    string color;

public:
    // Constructor
    Cat(string catName, int catAge, string catColor);

    // Destructor
    ~Cat();

    // Métodos GET (obtener valores)
    string getName();
    int getAge();
    string getColor();

    // Métodos SET (modificar valores)
    void setName(string newName);
    void setAge(int newAge);
    void setColor(string newColor);

    // Métodos adicionales
    void meow();
    void showInfo();
};

#endif