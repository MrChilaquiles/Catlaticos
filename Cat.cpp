#include "Cat.h"

// Constructor
Cat::Cat(int catAge, string catColor, int catPatitas, float catPeso) {
    age = catAge;
    color = catColor;
    patitas = catPatitas;
    peso = catPeso;
}

Cat::~Cat() {
    cout << "El perrito persiguio al gato y salio huyendo" << endl;
}

void Cat::meow() {
    cout << "meow moew meow" << endl;
}

float Cat::damePeso() {
    return peso;
}

void Cat::dormido() {
    cout << "grrrr zzz..." << endl;
}