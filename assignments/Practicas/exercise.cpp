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
    cout << edad << " " << &edad << pEdad << " " << *pEdad;

    // TODO 3: Usando UNICAMENTE el apuntador (no escribas 'edad = 25;'),
    // cambia el valor de edad a 25.
    *pEdad = 25;

    // TODO 4: Imprime edad de nuevo para confirmar que si cambio.
    cout << edad << " " << &edad << pEdad << " " << *pEdad;

    // TODO 5 (por tu cuenta): repite los pasos 1 a 4 con una variable
    // double en vez de int.
    double peso = 85.4; 
    double* pPeso = &peso; 
    cout << peso << " " << &peso << " " << pPeso << " " << *pPeso;
    *pPeso = 80.0; 
    cout << peso << " " << &peso << " " << pPeso << " " << *pPeso;
}

int main(){
}

