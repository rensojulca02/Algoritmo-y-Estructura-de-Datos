#include <iostream>

using namespace std;

template <typename T>
void pedirData(T* arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite un elemento [" << i << "] :"; cin >> arreglo[i];
    }
}


template<typename T>
void suma(T* arreglo, int n) {
    T suma = 0;
	for (int i = 0; i < n; ++i) {
        suma = suma + arreglo[i];
    }
    cout << "Suma de elementos " << suma;
}

int main() {
    int n;
    cout << "Numero de elementos del arreglo: "; cin >> n;
    float *arreglo = new float[n];
    
    pedirData(arreglo,n);
    suma(arreglo,n);

    delete[] arreglo;
    return 0;
}