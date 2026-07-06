#include "Rectangulo.hpp"
#include "iostream"
#include "cmath"

Rectangulo::Rectangulo():Figura(){
    ancho = 1;
    largo = 1; 
}

Rectangulo::Rectangulo(int an, int la):Figura(){
    ancho = an;
    largo = la;
}

Rectangulo::Rectangulo(int an, int la, std::string color_):Figura(an, la, color_){
    ancho = 1;
    largo = 1;  
}

int Rectangulo::getAncho() const{
    return ancho;
}

void Rectangulo::setAncho(int an){
    ancho = an; 
}

int Rectangulo::getLargo() const{
    return largo; 
}

void Rectangulo::setLargo(int la){
    largo = la; 
}

int Rectangulo::perimetro(){
    return (ancho + largo) * 2;
}

void Rectangulo::dibuja(){
    std::cout << "Soy un rectangulo de color " << getColor() << "(de ancho = " << std::to_string(getAncho()) << ", " <<
    "y de largo = " << std::to_string(getLargo()) << ") de perimetro = " << std::to_string(perimetro) << "." << std::endl;
}

