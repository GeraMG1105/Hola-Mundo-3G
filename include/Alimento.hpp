#pragma once
#include <fstream>
#include <iostream>
#include <string>

class Alimento

{
private:
    /* data */
    int Energia;

public:

Alimento() : Energia(0) {}


Alimento (int Energia) {

        this->Energia = Energia;
    }
    ~Alimento() {}

    int ExtraerEnergia(){
        return Energia;
    }
};