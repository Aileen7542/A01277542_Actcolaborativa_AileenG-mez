#pragma once    
#include <iostream>

class Figura{
    public:
        Figura();
        Figura(int,int, std::string);
        int getX() const;
        int getY() const;
        std::string getColor() const;
        void setX(int);
        void setY(int);
        void setColor(std::string);
        std::string dibuja();
    private:
        int x, y;
        std::string color;
};