#include <iostream>
#include "biblioteca.h"
//#define CATCH_CONFIG_MAIN
//#include "catch2.h"
//#ifndef CATCH_CONFIG_MAIN

int main() {
biblioteca b(10,10);
    b.agregarRevista("Men's Health");
    b.agregarRevista("Vogue");
    b.agregarLibro("1984");
    b.agregarLibro("Tarzan");
    b.agregarLibro("Me Dicen Sara Tomate");
    b.agregarRevista("Cosmopolitan");
    b.agregarLibro("Pedro Paramo");
    b.agregarRevista("Sports Authority");
    b.agregarRevista("ESPN Weekly");
    b.agregarRevista("Time");
    b.mostrarBiblioteca();
}
//#endif