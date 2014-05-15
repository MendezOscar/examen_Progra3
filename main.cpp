#include <iostream>
using namespace std;
#include "perro.h"
#include "canario.h"
#include "lora.h"
#include <vector>


int main()
{
    vector<Animal*> zoo;
    zoo.push_back(new Perro("perro", 15, "dogui"));
    zoo.push_back(new Lora("lora",10, "rio"));
    zoo.push_back(new Canario("canario",10, "blu"));

    for(int i = 0; i < zoo.size() ; i++){
       zoo[i]-> imprimir();
    }
    for(int i = 0; i < zoo.size() ; i++){
       zoo[i]-> rugir();
    }
    for(int i = 0; i < zoo.size() ; i++){
       zoo[i]-> volar();
    }
    return 0;
}
