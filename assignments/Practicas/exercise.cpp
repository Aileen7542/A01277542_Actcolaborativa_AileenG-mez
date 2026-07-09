#include "Circulo.hpp"
#include "iostream"
using namespace std;

void explorarDireccionesSimples() {
    cout << "===== PARTE 1: Direcciones con tipos simples =====" << endl;

    int edad = 20;
    // TODO 1: Declara un apuntador a int llamado pEdad que apunte a la
    // direccion de 'edad'. Pista: el * en esta linea NO es multiplicacion,
    // es parte del TIPO ("apuntador a int").
    // int* pEdad = ...
    int* pEdad = &edad; 

    // TODO 2: Imprime, en este orden: el valor de edad, la direccion de
    // edad (&edad), el valor de pEdad, y el valor apuntado por
    // pEdad (*pEdad). Deberias notar que &edad y pEdad son iguales,
    // y que edad y *pEdad son iguales.
    cout << edad << " " << &edad << " " << pEdad << " " << *pEdad; 

    // TODO 3: Usando UNICAMENTE el apuntador (no escribas 'edad = 25;'),
    // cambia el valor de edad a 25.
    *pEdad = 25;

    // TODO 4: Imprime edad de nuevo para confirmar que si cambio.
    cout << edad << " " << &edad << " " << pEdad << " " << *pEdad;

    // TODO 5 (por tu cuenta): repite los pasos 1 a 4 con una variable
    // double en vez de int.
    double peso = 85.4;
    double* pPeso = &peso;
    cout << peso << " " << &peso << " " << pPeso << " " << *pPeso;
    *pPeso = 80.0; 
    cout << peso << " " << &peso << " " << pPeso << " " << *pPeso;
}

void explorarFigura() {
    cout << "\n===== PARTE 2: Apuntadores a objetos Figura =====" << endl;
    
    Figura f1(3, 4, "Azul");
    cout << "f1: " << f1.dibuja() << endl;

    // TODO 1: Declara Figura* pf1 apuntando a f1.
    Figura* pf1 = &f1; 

    // TODO 2: Imprime &f1 y pf1. Deben mostrar la misma direccion.
    cout << &f1 << " " << pf1; 

    // TODO 3: Llama a getX() de f1 usando el apuntador, de DOS formas:
    // a) (*pf1).getX() <- forma explicita: dereferenciar y luego usar el punto
    // b) pf1->getX() <- forma abreviada, el operador flecha
    // Imprime ambos resultados y confirma que son iguales.
    cout << (*pf1).getX(); 
    cout << pf1 -> getX(); 
    
    // TODO 4: Usa pf1 (NO f1) para cambiar el color a "Verde":
    // pf1->setColor("Verde");
    (*pf1).setColor("Verde"); 
    pf1 ->setColor("Verde"); 

    // TODO 5: Imprime f1.dibuja() de nuevo. El color cambio, aunque
    // nunca escribiste f1.setColor() directamente: pf1 y f1
    // apuntan al mismo espacio de memoria.
    cout << "f1: " << f1.dibuja() << endl; 
}

void intentaCambiarColorPorValor(Figura f, string nuevoColor) {
    // TODO 1: dentro de esta funcion, cambia el color de 'f' (el parametro)
    // al valor de nuevoColor, usando f.setColor(...).
    f.setColor(nuevoColor);
}

void cambiarColorPorApuntador(Figura* pf, string nuevoColor) {
    // TODO 2: dentro de esta funcion, cambia el color de la figura
    // APUNTADA por pf al valor de nuevoColor, usando pf->setColor(...).
    pf ->setColor(nuevoColor); 
}

void compararPasoPorValorYApuntador() {
    cout << "\n===== PARTE 3: paso por valor vs. por apuntador =====" << endl;
    
    Figura f2(0, 0, "Blanco");
    cout << "Antes:                 " << f2.dibuja() << endl;
    
    intentaCambiarColorPorValor(f2, "Rojo");
    cout << "Despues de pasar POR VALOR: " << f2.dibuja() << endl;
    
    // TODO 3: llama a cambiarColorPorApuntador pasando la DIRECCION de f2
    // (recuerda: &f2), con nuevoColor = "Rojo".
    cambiarColorPorApuntador(&f2, "Rojo");

    cout << "Despues de pasar POR APUNTADOR: " << f2.dibuja() << endl;
}

void arregloDeApuntadores() {
    cout << "\n===== PARTE 4 (Reto): arreglo de apuntadores =====" << endl;
    
    Figura a(1, 1, "Rojo");
    Figura b(2, 2, "Verde");
    Figura c(3, 3, "Azul");

    // TODO 1: Declara un arreglo de 3 apuntadores a Figura:
    Figura* figuras[3];

    // TODO 2: Asigna las direcciones de a, b y c a cada posicion del
    // arreglo (figuras[0] = &a; etc.)
    figuras[0] = &a; 
    figuras[1] = &b; 
    figuras[2] = &c; 

    // TODO 3: Recorre el arreglo con un for y, para cada posicion,
    // llama a ->dibuja() e imprime el resultado.
    for(int i = 0; i < 3; i++) {
        cout << figuras[i] ->dibuja() << endl; 
    }
}

void figuraEnMemoriaDinamica() {
    cout << "\n===== PARTE 5 (Bonus): memoria dinamica =====" << endl;
    
    // TODO 1: Crea una Figura en el heap usando new:
    Figura* pDinamica = new Figura(5, 5, "Negro");

    // TODO 2: Usa pDinamica para llamar a dibuja() e imprimir el resultado.
    cout << pDinamica ->dibuja() << endl; 

    // TODO 3: Libera la memoria: delete pDinamica;
    delete pDinamica; 
}

int main() {
    explorarDireccionesSimples();
    explorarFigura();
    compararPasoPorValorYApuntador();
    arregloDeApuntadores();     // reto
    figuraEnMemoriaDinamica();        // bonus
    return 0;
}