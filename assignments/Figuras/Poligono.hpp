#pragma once
#include "Figura.hpp"
#include "iostream"

class Poligono: public Figura {
    private: 
        int lado;
        int numLados;
        int apotema; 
    public: 
        Poligono();  
        Poligono(int, int, int, int, int, std::string);
        int Poligono::getLado() const;
        void Poligono::setLado(int ls); 
        int Poligono::getNumLados() const; 
        void Poligono::setNumLados(int nml); 
        int Poligono::getApotema() const; 
        void Poligono::setApotema(int apl);
        int perimetro(); 
        double calcularArea(); 
        std::string dibuja() override;
};