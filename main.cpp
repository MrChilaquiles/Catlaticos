#include "Cat.h"

int main() {
    // Crear un objeto de Cat
    Cat myCat("Michi", 3, "Blanco");

    // Mostrar información inicial
    myCat.showInfo();

    cout << "-----------------" << endl;

    // Modificar valores con setters
    myCat.setName("Garfield");
    myCat.setAge(5);
    myCat.setColor("Naranja");

    // Mostrar información actualizada
    myCat.showInfo();

    // Probar getter
    cout << "Nombre del gato: " << myCat.getName() << endl;

    return 0;
}