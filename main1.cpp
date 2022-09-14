#include <iostream>

using namespace std;

template <typename T>
void pedirData(T *arreglo, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Digite un elemento [" << i << "] :";
        cin >> arreglo[i];
    }
}

template <typename T>
void encontrarMayor(T *arreglo, int n)
{
    T major = -1;
    int pos_major;
    for (int i = 0; i < n; ++i)
    {
        if (arreglo[i] > major)
        {
            major = arreglo[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (arreglo[i] == major)
        {
            pos_major = i;
        }
    }
    std::cout << "\nNumero mayor es: " << major;
    std::cout << "\nPosicion del nro es: " << pos_major;
}

int main()
{
    int n;
    cout << "Numero de elementos del arreglo: ";
    cin >> n;
    int *array = new int[n];

    pedirData(array, n);
    encontrarMayor(array, n);

    delete[] array;
    return 0;
}