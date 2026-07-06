#include <sstream>
#include "Figura.hpp"

Figura::Figura():x{0},y{0}, color{"Blanco"}{
}

Figura::Figura(int x_,int y_, std::string color_):x{x_}, y{y_}, color{color_}{
}

int Figura::getX() const {
    return x;
}

int Figura::getY() const{
    return y;
}

std::string Figura::getColor() const{
    return color;
}

void Figura::setX(int x_){
    x = x_;
}
void Figura::setY(int y_){
    y = y_;
}

void Figura::setColor(std::string color_){
    color = color_;
}

std::string Figura::dibuja(){
    // Utilizando alternativa a concatenación de strings con operador +
    std::stringstream ss;
    ss << "Soy una figura de color "<< color << " en la posición (" << std::to_string(x) << "," << std::to_string(y) << ")";
    return ss.str();
}
