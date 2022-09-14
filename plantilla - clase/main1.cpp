#include "CArreglo.hpp"

void opciones() {
    cout << "\t.:Menu:." << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    cout << "5" << endl;
    cout << "Digite : " << endl;
}
int main() {
    CArreglo <int> arreglo1(5);
    int opcion;
    int elemento;
    do {
       opciones();
       cin >> opcion;
       switch (opcion) {
            case 1:
                if (arreglo1.arregloLleno()) {
                    cout << "Arreglo lleno";
                }
                else {
                    cout << "Ingrese el elemento: "; cin >> elemento;
                    arreglo1.agregar(elemento);
                }
            break;

            case 2:
                if (arreglo1.arregloLleno()) {
                    cout << "Arreglo lleno";
                }
                else {
                    cout << "Arreglo no esta lleno" << endl;
                }
            break;

            case 3:
                arreglo1.mostrarArreglo();
            break;

            case 4:
                arreglo1.vaciarArreglo();
            break;
            
            case 5: break;
       default: cout << "Se equivoco";
        break;
       }

        cout << endl;
        system("PAUSE");
        system("cls");

    } while (opcion != 5);
    
    return 0;
}