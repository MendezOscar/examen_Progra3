#include "canario.h"
#include <iostream>
using namespace std;

Canario::Canario(string tipo, int edad, string nombre)
{
    this->tipo = tipo;
    this->edad = edad;
    this-> nombre = nombre;
}

void Canario::rugir(){
    cout << " fiuu fiu fiuu fiiiiiuuu " << endl;
}

Canario::~Canario()
{
    //dtor
}
