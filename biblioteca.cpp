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
//FOR POR EL VECTOR
    for(volumen v: volumenes){
        v.mostrar();
    }
}

void biblioteca::agregarLibro(std::string _titulo) {
    if(libros<maxLibros) {
        volumenes.emplace_back(libro(_titulo, numVolumenes,numVolumenes));
        libros++;
        numVolumenes++;
    }else{
        std::cout<<"No se pueden guardar mas libros."<<std::endl;
    }
}

void biblioteca::agregarRevista(std::string _titulo) {
    if(revistas<maxRevistas){
        volumenes.emplace_back(revista(_titulo, numVolumenes,numVolumenes));
        revistas++;
        numVolumenes++;
    }else{
        std::cout<<"No se pueden guardar mas revistas."<<std::endl;
    }
}

volumen biblioteca::getVolumen(int _numVolumen) {
    return volumenes[_numVolumen];
}

int biblioteca::getLibros() {
    return libros;
}

int biblioteca::getRevistas() {
    return revistas;
}
