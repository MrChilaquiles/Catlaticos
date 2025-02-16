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
        void setName(string);
        string getName(void);
        void setAge(int);
        int getAge(void);
        void setColor(string);
        string getColor(void);
        void setPeso(float);
        float getPeso(void);

        // Metodos adicionales
        void meow();
        void dormido();
        void showInf();
};

#endif