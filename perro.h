#ifndef PERRO_H
#define PERRO_H
#include "animal.h"
#include <iostream>
using namespace std;

class Perro : public Animal {

    public:
        Perro(string tipo, int edad, string nombre);
        void volar();
        void rugir();
        virtual ~Perro();
    protected:
    private:
};

#endif // PERRO_H
