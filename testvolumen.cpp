//
// Created by alejandro on 5/3/19.
//
#include "catch2.h"
#include "biblioteca.h"
#include "volumen.h"

SCENARIO("Biblioteca"){
    GIVEN("Agregacion de libros"){
        WHEN("Cuando no esta llena la bilbioteca"){
            biblioteca b(10,10);
            b.agregarLibro("1984");
            b.agregarLibro("Tarzan");
            b.agregarLibro("Me Dicen Sara Tomate");
            b.agregarLibro("Pedro Paramo");
            THEN("Hay 4 libros"){
                REQUIRE(b.getLibros()==4);
            }
        }
    }
    GIVEN("Agregacion de revistas"){
        WHEN("Cuando no esta llena la bilbioteca"){
            biblioteca b(10,10);
            b.agregarRevista("Sports Authority");
            b.agregarRevista("ESPN Weekly");
            b.agregarRevista("Men's Health");
            b.agregarRevista("Vogue");
            b.agregarRevista("Cosmopolitan");
            b.agregarRevista("Time");
            THEN("Hay 6 revistas"){
                REQUIRE(b.getRevistas()==6);
            }
        }
    }
}
