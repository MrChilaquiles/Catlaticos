#include "Cat.h"

// Constructor
Cat::Cat(string catName, int catAge, string catColor) {
    name = catName;
    age = catAge;
    color = catColor;
    cout << "El gato " << name << " ha sido creado." << endl;
}

// Destructor
Cat::~Cat() {
    cout << "El gato " << name << " ha sido eliminado." << endl;
}

// Métodos GET
string Cat::getName() {
    return name;
}

int Cat::getAge() {
    return age;
}

string Cat::getColor() {
    return color;
}

// Métodos SET
void Cat::setName(string newName) {
    name = newName;
}

void Cat::setAge(int newAge) {
    if (newAge >= 0) { // Validación: La edad no puede ser negativa
        age = newAge;
    } else {
        cout << "Edad inválida." << endl;
    }
}

void Cat::setColor(string newColor) {
    color = newColor;
}

// Método para maullar
void Cat::meow() {
    cout << name << " dice: ¡Miau! 🐱" << endl;
}

// Método para mostrar información
void Cat::showInfo() {
    cout << "Nombre: " << name << endl;
    cout << "Edad: " << age << " años" << endl;
    cout << "Color: " << color << endl;
}