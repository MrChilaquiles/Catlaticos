#include "Cat.h"

// Constructores
Cat::Cat(){
    name = "Robin";
    age = 1;
    color = "naranjoso";
    peso = 8.23;
}

Cat::Cat(string name) {
    this->name = name;
}

Cat::Cat(string name, int age) {
    this->name = name;
    this->age = age;
}

Cat::Cat(string name, int age, string color) {
    this->name = name;
    this->age = age;
    this->color = color;
}

Cat::Cat(string name, int age, string color, float peso) {
    this->name = name;
    this->age = age;
    this->color = color;
    this->peso = peso;
}

// Destructor
Cat::~Cat() {
    cout << name << " encontro una mariposa y se fue tras ella con sus poderosos " << peso << " kg" << endl;
}

// Getters y Setters
void Cat::setName(string name) {
    this->name = name;
}

string Cat::getName() {
    return this->name;
}

void Cat::setAge(int age) {
    this->age = age;
}

int Cat::getAge() {
    return this->age;
}

void Cat::setColor(string color) {
    this->color = color;
}

string Cat::getColor() {
    return this->color;
}

void Cat::setPeso(float peso) {
    this->peso = peso;
}

float Cat::getPeso() {
    return this->peso;
}

// Metodos adicionales
void Cat::meow() {
    cout << "meow moew meow" << endl;
}

void Cat::dormido() {
    cout << "grrrr zzz..." << endl;
}

void Cat::showInf() {
    cout << "Nombre: " << name << endl;
    cout << "Edad: " << age << endl;
    cout << "Color: " << color << endl;
    cout << "Peso: " << peso << endl;
}