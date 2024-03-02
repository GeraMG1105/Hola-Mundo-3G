#include <iostream>
using namespace std;
#include<Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>


// namespace name


int main(int argc, char const *argv[])
{

    Dibujo dibujo("./assets/Mascota.txt");
    Alimento alimento;
    Mascota m1;
    Mascota m2;
    Mascota m3;

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);

    
cout << "Mascota" << m1.LeerEnergia()<<  "/n";


    return 0;
}
