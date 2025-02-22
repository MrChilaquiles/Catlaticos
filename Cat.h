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
        float peso;
    public:
        // Constructores
        Cat();
        Cat(string name);
        Cat(string name, int age);
        Cat(string name, int age, string color);
        Cat(string name, int age, string color, float peso);
        
        // Destructor
        ~Cat();
        
        // Getters y Setters
        void setName(string name);
        string getName(void);
        void setAge(int age);
        int getAge(void);
        void setColor(string color);
        string getColor(void);
        void setPeso(float peso);
        float getPeso(void);

        // Metodos adicionales
        void meow();
        void dormido();
        void showInf();
};

#endif