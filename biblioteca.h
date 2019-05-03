//
// Created by alejandro on 5/3/19.
//

#include <vector>
#include "volumen.h"
#include <string>
#ifndef AGREGACION_Y_HERENCIA_ALEJANDROGH97_BIBLIOTECA_H
#define AGREGACION_Y_HERENCIA_ALEJANDROGH97_BIBLIOTECA_H


class biblioteca {
private:
    int maxLibros;
    int maxRevistas;
    int libros;
    int revistas;
    int numVolumenes;
    std::vector<volumen*> volumenes;

public:
    biblioteca(int maxLib,int maxRev);
    void agregarLibro(std::string _titulo);
    void agregarRevista(std::string _titulo);
    void mostrarBiblioteca();
    volumen* getVolumen(int _numVolumen);
    int getLibros();
    int getRevistas();
};


#endif //AGREGACION_Y_HERENCIA_ALEJANDROGH97_BIBLIOTECA_H
