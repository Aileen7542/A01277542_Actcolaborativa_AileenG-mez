#include "Circulo.hpp"
#include "iostream"
#include "cmath"

Circulo::Circulo():Figura(){
    radio = 1;
}

Circulo::Circulo(int x_, int y_, std::string color_, int radio_):Figura(x_, y_, color_){
    radio = radio_; 
}

Circulo::Circulo(int radio_):Figura(){
    radio = radio_;
}

Circulo::Circulo(int x_, int y_, std::string color_):Figura(x_, y_, color_){
    radio = 1; 
}

int Circulo::getRadio() const{
    return radio; 
}

void Circulo::setRadio(int radio_) const{
    radio = radio_;
}

double Circulo::circunferencia(){
    return 2 * radio * M_PI;
}

void Circulo::dibuja(){
    std::cout << "Soy un circulo de color " << getColor() << "con el centro en (" << std::string(getX()) << ", " <<
    std::to_string(getY()) << ") de radio = " << std::to_string(radio) << "y circunferencia = "
    std::to_string(circunferencia()) << "." << std::endl;
}