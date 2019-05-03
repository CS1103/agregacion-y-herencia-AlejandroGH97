//
// Created by alejandro on 5/3/19.
//

#include <iostream>
#include "revista.h"

revista::revista(std::string _titulo, int _numVol, int _numRev):numRev{_numRev}{
    titulo = _titulo;
    numVol = _numVol;
}

void revista::mostrar() {
    std::cout<<"Volumen #"<<numVol<<": Revista: #"<<numRev<<" Titulo: '"<<titulo<<"'\n";

}

