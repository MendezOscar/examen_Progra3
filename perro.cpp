#include "perro.h"
#include <iostream>

using namespace std;

Perro::Perro(string tipo, int edad, string nombre)
{
    this-> tipo = tipo;
    this-> edad = edad;
    this-> nombre = nombre;
}
void Perro::rugir(){
    cout << "guau guau guauuuuuuu " << endl;
}
void Perro::volar(){
    cout << " No estoy volando " << endl;
}

Perro::~Perro()
{
    //dtor
}

