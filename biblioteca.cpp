//
// Created by alejandro on 5/3/19.
//

#include <iostream>
#include "biblioteca.h"
#include "volumen.h"
#include "libro.h"
#include "revista.h"

biblioteca::biblioteca(int maxLib, int maxRev):maxLibros{maxLib},maxRevistas{maxRev}{
    libros = 0;
    revistas = 0;
    numVolumenes = 0;
}

void biblioteca::mostrarBiblioteca() {
    for(volumen* v: volumenes){
        v->mostrar();
    }
}

void biblioteca::agregarLibro(std::string _titulo) {
    if(libros<maxLibros) {
        libros++;
        numVolumenes++;
        volumenes.emplace_back(new libro(_titulo, numVolumenes,libros));
    }else{
        std::cout<<"No se pueden guardar mas libros."<<std::endl;
    }
}

void biblioteca::agregarRevista(std::string _titulo) {
    if(revistas<maxRevistas){
        revistas++;
        numVolumenes++;
        volumenes.emplace_back(new revista(_titulo, numVolumenes,revistas));
    }else{
        std::cout<<"No se pueden guardar mas revistas."<<std::endl;
    }
}

int biblioteca::getLibros() {
    return libros;
}

int biblioteca::getRevistas() {
    return revistas;
}
