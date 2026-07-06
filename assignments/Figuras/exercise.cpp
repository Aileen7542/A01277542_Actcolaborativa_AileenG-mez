#include <iostream>
#include "Figura.hpp"
using namespace std;

int main() 
{
    Figura f1;
	cout << f1.dibuja() << std::endl;
    Figura f2(1,2,"Rojo");
    cout << f2.dibuja() << std::endl;
}
