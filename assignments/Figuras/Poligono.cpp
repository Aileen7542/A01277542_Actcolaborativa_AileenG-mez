#include "Poligono.hpp"
#include "iostream"
#include "cmath"

Poligono::Poligono():Figura(){
    lado = 1;
    numLados = 1;
    apotema = 1; 
}

Poligono::Poligono(int x_, int y_, int ls, int nml, int apt, std::string color_):Figura(x_, y_, color_){
    lado = ls; 
    numLados = nml;
    apotema = apt;
}

int Poligono::getLado() const{
    return lado; 
}

void Poligono::setLado(int ls){
    lado = ls;
}

int Poligono::getNumLados() const{
    return numLados; 
}

void Poligono::setNumLados(int nml){
    numLados = nml; 
}

int Poligono::getApotema() const{
    return apotema; 
}

void Poligono::setApotema(int apt){
    apotema = apt; 
}

int Poligono::perimetro(){
    return (lado * numLados); 
}

double Poligono::calcularArea(){
    return (perimetro() * apotema)/2; 
}

std::string Poligono::dibuja(){
    return "Soy un poligono"; 
}