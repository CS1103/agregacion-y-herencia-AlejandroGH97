//
// Created by alejandro on 5/3/19.
//

#ifndef AGREGACION_Y_HERENCIA_ALEJANDROGH97_LIBRO_H
#define AGREGACION_Y_HERENCIA_ALEJANDROGH97_LIBRO_H


#include "volumen.h"

class libro: public volumen {
private:
    int numLib;
public:
    explicit libro(std::string _titulo, int _numVol, int _numLib);
    void mostrar() override ;
};


#endif //AGREGACION_Y_HERENCIA_ALEJANDROGH97_LIBRO_H
