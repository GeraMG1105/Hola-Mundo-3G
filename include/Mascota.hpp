#pragma once
#include "/workspaces/Hola-Mundo-3G/include/Alimento.hpp"

class Mascota
{
private:
    /* data */
    int Felicidad;
    int Energia;

public:

    Mascota() {
        this->Energia = 0;
    }
    ~Mascota() {}
void Comer(Alimento alimento){
    this-> Energia += alimento.ExtraerEnergia();
}

int LeerEnergia(){
    return this->Energia;

}
};