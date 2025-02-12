#include "Cat.h"
#include "Dog.h"
#include "Bird.h"

int main() {
    Cat myCat(2, "vaquita", 3, 5.7);
    Dog myDog(12, "trapeador", 5.6);
    Bird myBird(2, "Rojo", "Perico");

    cout << "El peso de mi gatito es " << myCat.damePeso() << endl;
    myCat.meow();
    myCat.dormido();

    cout << "----------------------" << endl;
    cout << myCat.getAge() << endl;
    myCat.setAge(12);
    cout << myCat.getAge() << endl;
    cout << "----------------------" << endl;

    myDog.guau();
    myDog.sentarse();

    cout << "----------------------" << endl;
    myBird.pico();
    cout << "La especie de mi pajarito es " << myBird.dameRaza() << " y su color es " << myBird.color << endl;
    return 0;
}