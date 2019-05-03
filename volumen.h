//
// Created by alejandro on 5/3/19.
//

#include <string>

#ifndef AGREGACION_Y_HERENCIA_ALEJANDROGH97_VOLUMEN_H
#define AGREGACION_Y_HERENCIA_ALEJANDROGH97_VOLUMEN_H


class volumen {
protected:
    std::string titulo;
    int numVol;
public:
    volumen()= default;
    virtual void mostrar()=0;
};


#endif //AGREGACION_Y_HERENCIA_ALEJANDROGH97_VOLUMEN_H
