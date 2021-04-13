#include "ejercicios.h"
#include <iostream>

using namespace std;

bool esPar(int n){
    bool esPar = n % 2 == 0;
    return esPar;
}

bool todosSonPares(vector<int> numeros){
    bool todosPares = true;
    for (int a : numeros){
        if ( esPar(a)) {
            todosPares = todosPares && true;// true && true && true ...
        } else {
            todosPares = todosPares && false;// true && false && true ...
        }
    }
    return todosPares;
}

void agregarNumeros(vector<int> & numeros, vector<int> elementosNuevos){
    for (int i = 0; i < elementosNuevos.size(); ++i) {
        numeros.push_back(elementosNuevos[i]);
    }
}

void imprimirValores(vector<int> numeros){
    for (int a : numeros){
        cout << a << endl;
    }
}

void eliminarImpares(vector<int> &numeros){
    vector<int> vectorConPares;
    for (int i = 0; i < numeros.size(); ++i) {
        int valorActual = numeros[i];
        if (esPar(valorActual)){
            vectorConPares.push_back(valorActual);
        }
    }
    numeros.clear();
    agregarNumeros(numeros,vectorConPares);

}

vector<int> eliminarImparesOtraForma(vector<int> numeros){
    vector<int> soloPares;
    for (int i = 0; i < numeros.size(); ++i) {
        int valorActual = numeros[i];
        if (esPar(valorActual)) {
            soloPares.push_back(valorActual);
        }
    }
    return soloPares;
}


void saludar(string nombre) {
    imprimirString("Hola! ingrese su nombre");
    string nombreIngresado;
    cin >> nombreIngresado;
    imprimirString("Hola, " + nombreIngresado);
}

int sumaDeEnterosDeVector(vector<int> numeros) {
    int sumaTotal = 0;
    for (int i = 0; i < numeros.size(); ++i) {
        sumaTotal = sumaTotal + numeros[i];
    }
    return sumaTotal;
}

float sumaDeFloatsDeVector(vector<float> numeros) {
    float sumaTotal = 0;
    for (int i = 0; i < numeros.size(); ++i) {
        sumaTotal = sumaTotal + numeros[i];
    }
    return sumaTotal;
}

void ingresarTresNumerosYSumarlos() {
    imprimirString("ingrese 3 números");
    vector<int> numerosIngresados;
    for (int i = 0; i < 3; ++i) {
        int valorIngresado;
        cin >> valorIngresado;
        numerosIngresados.push_back(valorIngresado);
    }
    int resultadoDeSuma = sumaDeEnterosDeVector(numerosIngresados);
    imprimirString("El resultado es: ");
    imprimirNumero(resultadoDeSuma);
}

void ingresarTresNumerosEImprimirlos() {
    vector<int> valoresIngresados;
    for (int i = 0; i < 3; ++i) {
        imprimirString("Ingrese un número");
        int valorIngresado;
        cin >> valorIngresado;
        valoresIngresados.push_back(valorIngresado);
    }
    imprimirString("Los valores ingresados fueron: ");
    imprimirValores(valoresIngresados);
}

void imprimirPalabrasSegunIndices() {

    vector<string> palabrasIngresadas;
    for (int i = 0; i < 6; ++i) {
        imprimirString("Ingrese una palabra");
        string palabraIngresada;
        cin >> palabraIngresada;
        palabrasIngresadas.push_back(palabraIngresada);
    }

    vector<string> palabrasConIndicesPares;
    vector<string> palabrasConIndicesImpares;
    for (int i = 0; i < palabrasIngresadas.size(); ++i) {

        string palabraActual = palabrasIngresadas[i];

        if (esPar(i)){
            palabrasConIndicesPares.push_back(palabraActual);
        } else {
            palabrasConIndicesImpares.push_back(palabraActual);
        }
    }

    imprimirString("Las palabras con índices pares son: ");
    imprimirPalabrasConGuionMedio(palabrasConIndicesPares);

    imprimirString("Las palabras con índices impares son: ");
    imprimirPalabrasConGuionMedio(palabrasConIndicesImpares);

}

void imprimirPalabrasConGuionMedio(vector<string> palabras) {
    string palabrasConcatenadas = "";
    for (int i = 0; i < palabras.size(); ++i) {
        string palabraActual = palabras[i];
        if ( i != palabras.size() - 1 ){
            palabrasConcatenadas += palabraActual + "-";
        } else {
            palabrasConcatenadas += palabraActual;
        }
    }
    imprimirString(palabrasConcatenadas);
}

void registroDeCompras() {

    vector<string> nombresDeProductos;
    vector<float> preciosDeProductos;

    bool mostrarOpciones = true;

    while (mostrarOpciones) {
        imprimirString("-------------------------------------------------------");
        imprimirString("Menú");
        imprimirString("Elija una opción");
        imprimirString("1. Registrar producto");
        imprimirString("2. Importe parcial a pagar");
        imprimirString("3. Finalizar registro e imprimir importe total");
        imprimirString("-------------------------------------------------------");

        int opcionElegida = ingresarInt();

        if (opcionElegida == 1){
            registrarProducto(nombresDeProductos,preciosDeProductos);
        }

        if (opcionElegida == 2){
            mostrarImporteParcial(preciosDeProductos);
            imprimirString("-------------------------------------------------------");
            imprimirString("Menú");
            imprimirString("Elija una opción");
            imprimirString("1. Registrar producto");
            imprimirString("2. Finalizar registro e imprimir importe total");
            imprimirString("-------------------------------------------------------");

            int opcionIngresada = ingresarInt();
            if (opcionIngresada == 1){
                registrarProducto(nombresDeProductos,preciosDeProductos);
            } else {
                mostrarOpciones = false;
            }
        }

        if (opcionElegida == 3){
            mostrarImporteTotal(preciosDeProductos);
            mostrarOpciones = false;
        }

    }
}

void registrarProducto(vector<string> &nombres, vector<float> &precios) {
    imprimirString("Ingrese el nombre del producto");
    string nombre = ingresarString();
    nombres.push_back(nombre);
    imprimirString("Ingrese el precio del producto");
    float precio = ingresarFloat();
    precios.push_back(precio);
    imprimirString("Ingreso realizado!");
}

void mostrarImporteParcial(vector<float> precios) {
    float importeParcial = sumaDeFloatsDeVector(precios);
    imprimirString("El importe parcial es: ");
    imprimirFloat(importeParcial);
}

void mostrarImporteTotal(vector<float> precios) {
    imprimirString("El importe total es: ");
    float importeTotal = sumaDeFloatsDeVector(precios);
    imprimirFloat(importeTotal);
    imprimirString("Bye!");
}

void imprimirString(string palabra){
    cout << palabra << endl;
}

void imprimirNumero(int numero){
    cout << numero << endl;
}

void imprimirBool(bool numero){
    cout << numero << endl;
}

int ingresarInt() {
    int enteroIngresado;
    cin >> enteroIngresado;
    return enteroIngresado;
}

string ingresarString() {
    string stringIngresado;
    cin >> stringIngresado;
    return stringIngresado;
}

float ingresarFloat() {
    float decimalIngresado;
    cin >> decimalIngresado;
    return decimalIngresado;
}

void imprimirFloat(float numero) {
    cout << numero << endl;
}













