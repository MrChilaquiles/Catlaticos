#include "Cat.h"

// Constructor
Cat::Cat(int age, string color, int patitas, float peso) {
    this->age = age;
    this->color = color;
    this->patitas = patitas;
    this->peso = peso;
}

// Destructor
Cat::~Cat() {
    cout << "El perrito persiguio al gato y salio huyendo" << endl;
}

// Getters y Setters
void Cat::setAge(int age) {
    this->age = age;
}

int Cat::getAge() {
    return this->age;
}

void Cat::setColor(string) {
    this->color = color;
}

string Cat::getColor() {
    return this->color;
}

void Cat::setPatitas(int) {
    this->patitas = patitas;
}

int Cat::getPatitas() {
    return this->patitas;
}

void Cat::setPeso(float) {
    this->peso = peso;
}

float Cat::getPeso() {
    return this->peso;
}

// Metodos adicionales
void Cat::meow() {
    cout << "meow moew meow" << endl;
}

float Cat::damePeso() {
    return peso;
}

void Cat::dormido() {
    cout << "grrrr zzz..." << endl;
}