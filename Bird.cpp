#include "Bird.h"

// Constructores
Bird::Bird() {
    name = "Pajarin";
    age = 1;
    clase = "Cotorro";
    altMax = 10;
    velocidad = 15;
}

Bird::Bird(string name) {
    this->name = name;
}

Bird::Bird(string name, int age) {
    this->name = name;
    this->age = age;
}

Bird::Bird(string name, int age, string clase) {
    this->name = name;
    this->age = age;
    this->clase = clase;
}

Bird::Bird(string name, int age, string clase, float altMax) {
    this->name = name;
    this->age = age;
    this->clase = clase;
    this->altMax = altMax;
}

Bird::Bird(string name, int age, string clase, float altMax, float velocidad) {
    this->name = name;
    this->age = age;
    this->clase = clase;
    this->altMax = altMax;
    this->velocidad = velocidad;
}

// Destructor
Bird::~Bird() {
    cout << name << " se fue volando porque lo estan persiguiendo" << endl;
}

// Getters y Setters
void Bird::setName(string name) {
    this->name = name;
}

string Bird::getName() {
    return this->name;
}

void Bird::setAge(int age) {
    this->age = age;
}

int Bird::getAge() {
    return this->age;
}

void Bird::setClase(string clase) {
    this->clase = clase;
}

string Bird::getClase() {
    return this->clase = clase;
}

void Bird::setAltMax(float altMax) {
    this->altMax = altMax;
}

float Bird::getAltMax() {
    return this->altMax = altMax;
}

void Bird::setVelocidad(float velocidad) {
    this->velocidad = velocidad;
}

float Bird::getVelocidad() {
    return this->velocidad = velocidad;
}

// Metodos adicionales
