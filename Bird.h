#ifndef BIRD_H
#define BIRD_H

#include <iostream>
#include <string>
using namespace std;

class Bird {
    private:
        string name;
        int age;
        string clase;
        float altMax;
        float velocidad;
    public:
        // Constructores
        Bird();
        Bird(string name);
        Bird(string name, int age);
        Bird(string name, int age, string clase);
        Bird(string name, int age, string clase, float altMax);
        Bird(string name, int age, string clase, float altMax, float velocidad);
        
        // Destructor
        ~Bird();
        
        // Getters y Setters
        void setName(string name);
        string getName(void);
        void setAge(int age);
        int getAge(void);
        void setClase(string clase);
        string getClase(void);
        void setAltMax(float altMax);
        float getAltMax(void);
        void setVelocidad(float velocidad);
        float getVelocidad(void);
        
        // Metodos adicionales
        
};

#endif