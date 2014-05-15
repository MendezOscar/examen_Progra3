#ifndef CANARIO_H
#define CANARIO_H
#include "animal.h"

class Canario : public Animal
{
    public:
        Canario(string tipo, int edad, string nombre);
        void rugir();
        virtual ~Canario();
    protected:
    private:
};

#endif // CANARIO_H
