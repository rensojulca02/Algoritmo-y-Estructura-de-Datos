#include <iostream>

using namespace std;

template <typename T>
void pedirData(T* arreglo, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite un elemento [" << i << "] :"; cin >> arreglo[i];
    }
}


template<typename T>
void encontrarMenor(T* arreglo, int n) {
	T menor = 180; 
    int pos_menor;
	for (int i = 0; i < n; ++i) {
		if (arreglo[i] < menor) {
			menor = arreglo[i];
		}
	}
	for (int i = 0; i < n; ++i) {
		if (arreglo[i] == menor) {
			pos_menor = i;
		}
	}
	std::cout << "\nElemento menor es: " << menor;
	std::cout << "\nPosicion del elemento es: " << pos_menor;
}

int main() {
    int n;
    cout << "Numero de elementos del arreglo: "; cin >> n;
    char *arreglo = new char[n];
    
    pedirData(arreglo,n);
    encontrarMenor(arreglo,n);

    delete[] arreglo;
    return 0;
}