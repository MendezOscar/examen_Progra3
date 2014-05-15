#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal()
{
    //ctor
}

Animal::~Animal()
{
    //dtor
}

void Animal::imprimir(){

    cout<<"Tipo" << tipo << endl;
    cout<<"Edad: "<< edad << endl;
    cout<<"Nombre: "<< nombre << endl;
}

void Animal::volar(){
    cout << "Estoy volando" << endl;
}
