#include <iostream>
#include <stdlib.h>
using namespace std;
template<class T>
class CArreglo {
private:
    T *arreglo;
    int indice;
    int nElementos;
public:
    CArreglo(int n) {
        arreglo = new T[n];
        indice = 0;
        nElementos = n;
    }

    ~CArreglo() { delete[] arreglo; }

    /*Metodos*/
    void agregar(T elemento) {
        arreglo[indice++] = elemento;
    }

    bool arregloLleno() {
        if (indice >= nElementos) return true;
        else return false;
    }

    void mostrarArreglo() {
        for (int i = 0; i < indice; i++) {
            cout << "Elemento [" << i << "]: " << arreglo[i] << endl;
        }
        
    }

    void vaciarArreglo() {
        for (int i = 0; i < indice; i++) 
            arreglo[i] = 0;
        
        indice = 0; 
    }
};


