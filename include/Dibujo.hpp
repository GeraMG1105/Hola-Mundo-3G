#pragma once
#include <mascota.txt>
#include <fstream>
#include <string>

class Dibujo

{
    private:
        fstream file;

    public:
        Dibujo(string path){
            file.open("./assets/Mascota.txt");


        }

        ~Dibujo(){
            file.close();
        }

        void Dibujar(){

            string linea;
            while (getline(file >> linea)){

                cout << linea <<endl;
            }
        }



        };

