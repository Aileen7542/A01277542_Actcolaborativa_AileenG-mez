#pragma once 
#include "Figura.hpp"

class Rectangulo: public Figura {
    private: 
        int ancho; 
        int largo; 
    public: 
        Rectangulo(); 
        Rectangulo(int); 
        Rectangulo(int, int, std::string);
        Rectangulo(int, int, std::string, int);
        int Rectangulo::getAncho();
        void Rectangulo::setAncho();
        int Rectangulo::getLargo();
        void Rectangulo::setLargo();
        int perimetro(); 
        void dibuja();
};