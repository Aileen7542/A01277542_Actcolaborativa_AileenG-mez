#pragma once 
#include "Figura.hpp"

class Rectangulo: public Figura {
    private: 
        int ancho; 
        int largo; 
    public: 
        Rectangulo(); 
        Rectangulo(int, int); 
        Rectangulo(int, int, std::string);
        int Rectangulo::getAncho() const;
        void Rectangulo::setAncho();
        int Rectangulo::getLargo() const;
        void Rectangulo::setLargo();
        int perimetro(); 
        double calcularArea(); 
        //void dibuja();
        std::string dibuja() override; 
};