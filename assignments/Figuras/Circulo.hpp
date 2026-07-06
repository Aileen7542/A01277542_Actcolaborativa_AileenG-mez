#pragma once
#include "Figura.hpp"
#include "iostream"

class Circulo: public Figura {
    private: 
        int radio;
    public: 
        Circulo(); 
        Circulo(int, int, std::string, int);
        Circulo(int); 
        Circulo(int, int, std::string);
        int Circulo::getRadio();
        void Circulo::setRadio(); 
        double circunferencia(); 
        void dibuja();
};