#include <iostream>
#include "include/Mascota.hpp"
#include "include/Alimento.hpp"
#include "include/Dibujo.hpp"
#include <list>
using namespace std;

int main(int argc, char const *argv[]) {
    
    list<Dibujo> dibujos;

    Dibujo dibujo1("./assets/Pepe.txt");
    dibujo1.Dibujar(); //Creacion del dibujo 1
    
    Dibujo dibujo2("./assets/Anatoly.txt");
    dibujo2.Dibujar(); //Creacion del dibujo 2

    //dibujos.push_front(dibujo1);
    //dibujos.push_front(dibujo2);

    Alimento alimento(5); 

    Mascota m1, m2, m3;

    list<Mascota> mascotas;
    mascotas.push_back(m1);
    mascotas.push_back(m2);
    mascotas.push_back(m3);




    

    for (auto &&mascotaActual : mascotas)
    {
        mascotaActual.Comer(alimento);
    }
    for (auto &&mascotaActual : mascotas)

    {
        cout << "Mascota" << mascotaActual.LeerEnergia() << endl;
    }
    
    

    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);

    cout << "Energía de la mascota: " << m1.LeerEnergia() << "\n";

    return 0;
}