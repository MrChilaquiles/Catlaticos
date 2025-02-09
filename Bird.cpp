#include "Bird.h"

Bird::Bird(int birdAge, string birdColor, string birdRaza) {
    age = birdAge;
    color = birdColor;
    raza = birdRaza;
}

Bird::~Bird() {
    cout << "El pajarito se fue volando" << endl;
}

void Bird::pico() {
    cout << "picotaso" << endl;
}

string Bird::dameRaza() {
    return raza;
}