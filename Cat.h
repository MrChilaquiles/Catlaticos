#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
using namespace std;

class Cat {
    private:
        int age;
        string color;
        int patitas;
        float peso;
    public:
        // Constructores
        Cat();
        Cat(int age);
        Cat(int age, string color);
        Cat(int age, string color, int patitas);
        Cat(int age, string color, int patitas, float peso);
        
        // Destructor
        ~Cat();
        
        // Getters y Setters
        void setAge(int);
        int getAge(void);
        void setColor(string);
        string getColor(void);
        void setPatitas(int);
        int getPatitas(void);
        void setPeso(float);
        float getPeso(void);

        // Metodos adicionales
        void meow();
        float damePeso();
        void dormido();
};

#endif