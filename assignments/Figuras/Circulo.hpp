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
        int Circulo::getRadio() const;
        void Circulo::setRadio(int radio_); 
        double circunferencia(); 
        double calcularArea(); 
        //void dibuja();
        std::string dibuja() override;
};