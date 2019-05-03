//
// Created by alejandro on 5/3/19.
//

#ifndef AGREGACION_Y_HERENCIA_ALEJANDROGH97_REVISTA_H
#define AGREGACION_Y_HERENCIA_ALEJANDROGH97_REVISTA_H


#include "volumen.h"

class revista: public volumen {
private:
    int numRev;
public:
    explicit revista(std::string _titulo, int _numVol, int _numRev);
    void mostrar() override ;
};


#endif //AGREGACION_Y_HERENCIA_ALEJANDROGH97_REVISTA_H
