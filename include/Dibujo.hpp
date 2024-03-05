#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Dibujo

{
    private:
        fstream file;

    public:
    Dibujo(){}
        Dibujo(string path){
            file.open(path);
            if (!file.is_open()){
                cerr << "Error al abrir el archivo" << endl;
            
            }


        }

        ~Dibujo(){
            file.close();
        }

        void Dibujar(){

            string linea;
            while (getline(file, linea)){

                cout << linea <<endl;
            }
        }



        };

