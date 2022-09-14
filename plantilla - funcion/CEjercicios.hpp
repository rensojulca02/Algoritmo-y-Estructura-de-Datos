template<typename T>
void intercambiar(T &dato1, T &dato2) {
    T aux;
    aux = dato1;
    dato1 = dato2;
    dato2 = aux;
}

template<typename T>
void ordenarAscendente(T *arreglo, int n) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n- 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                intercambiar(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}

template<typename T>
void ordenarDescendente(T *arreglo, int n) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n- 1; j++) {
            if (arreglo[j] < arreglo[j + 1]) {
                intercambiar(arreglo[j], arreglo[j + 1]);
            }
        }
    }
}


