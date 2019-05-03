//
// Created by alejandro on 5/3/19.
//

#include "libro.h"
#include <iostream>

libro::libro(std::string _titulo, int _numVol, int _numLib):numLib{_numLib}{
    titulo = _titulo;
    numVol = _numVol;
}

void libro::mostrar() {
    std::cout<<"Volumen #"<<numVol<<": Libro: #"<<numLib<<" Titulo: '"<<titulo<<"'\n";
}
