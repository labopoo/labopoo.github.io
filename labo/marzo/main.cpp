#include <vector>
#include <iostream>
#include "ejercicios.h"

using namespace std;

int main() {

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    cout << "tamaño del vector: " << a.size() << endl;
    imprimirValores(a);
    
    a.pop_back();
    a.pop_back();
    cout << "tamaño del vector: " << a.size() << endl;
    imprimirValores(a);
    
    cout << "prueba para función  esPar" << endl;

    bool valor = esPar(2);
    cout << valor << endl;

    valor = esPar(1);
    cout << valor << endl;

    imprimirString("prueba para función todosSonPares");

    vector<int> numeros1;
    numeros1.push_back(4);
    numeros1.push_back(2);
    numeros1.push_back(6);

    bool respuesta = todosSonPares(numeros1);
    imprimirBool(respuesta);

    numeros1.push_back(1);
    respuesta = todosSonPares(numeros1);
    imprimirBool(respuesta);

    imprimirString("prueba con función agregarNumeros");

    vector<int> nuevosNumeros;
    nuevosNumeros.push_back(7);
    nuevosNumeros.push_back(8);
    nuevosNumeros.push_back(3);
    agregarNumeros(numeros1,nuevosNumeros);

    imprimirValores(numeros1);

    imprimirString("prueba con funcion eliminarImpares");

    eliminarImpares(numeros1);
    imprimirValores(numeros1);

    return 0;
}
