#ifndef LORA_H
#define LORA_H
#include "animal.h"

class Lora : public Animal
{
    public:
        Lora(string tipo, int edad, string nombre);
        void rugir();
        virtual ~Lora();
    protected:
    private:
};

#endif // LORA_H
