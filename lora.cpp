#include "lora.h"
#include <iostream>
using namespace std;

Lora::Lora(string tipo, int edad, string nombre)
{
    this->tipo = tipo;
    this->edad = edad;
    this-> nombre = nombre;
}
void Lora::rugir(){
    cout << " ura urrra urracaturra " << endl;
}
Lora::~Lora()
{
    //dtor
}
