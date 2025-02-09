#include "Dog.h"

Dog::Dog(int catAge, string catRaza, float catPeso) {
    age = catAge;
    raza = catRaza;
    peso = catPeso;
}
Dog::~Dog() {
    cout << "Se escapo el perrito" << endl;
}
void Dog::guau() {
    cout << "Guau guau guau" << endl;
}

void Dog::sentarse() {
    cout << "El perrito de raza " << raza << " se sento" << endl;
}