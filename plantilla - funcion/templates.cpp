#include <iostream>
#include "CEjercicios.hpp"

using namespace std;

template <typename T>
void pedirData(T* arreglo, int n) {
    for (size_t i = 0; i < n; i++) {
        cout << "Digite un elemento [" << i << "] :"; cin >> arreglo[i];
    }
}

template <typename T>
void mostrarArreglo(T* arreglo, int n) {
    for (size_t i = 0; i < n; i++) {
        cout << "Elemento [" << i << "] : " << arreglo[i] <<endl;
    }
    
}

int main() {
    int n;
    cout << "Cantidad de elementos del arreglo: "; cin >> n;

    char *elementos = new char[n];

    cout << "\nPidiendo los elementos del arreglo: " << endl;
    pedirData(elementos, n);

    //Ordenando elementos del arreglo Ascendentemente
    cout << "Mostrando arreglo:" << endl;
    ordenarAscendente(elementos, n);
    
    mostrarArreglo(elementos, n);

    //Ordenando elementos del arredlo descendentemente
    cout << "Mostrando arreglo:" << endl;
    ordenarDescendente(elementos, n);
    
    mostrarArreglo(elementos, n);


    delete []elementos;
    return 0;
}

