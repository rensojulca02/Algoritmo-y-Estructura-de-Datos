#include "CEjemploPlantilla.hpp"

int main() {
    CEjemploPlantilla <int,float> obj1(5,9.87);
    obj1.mostrarDatos();
    obj1.setDato1(10);
    obj1.setDato2(8.78);
    cout << endl;
    obj1.mostrarDatos();
    return 0;
}
/* 

#include "CMateria.hpp"

int main() {

    CMateria <int> curso1 ("Algortimos", 1, 15);
    CMateria <float> curso2 ("Matematicas", 2, 18.89);
    CMateria <char> curso3 ("Lenguaje", 3, 'A');

    cout << "Mostrando datos del curso 1: " << endl;
    curso1.mostrarDatos();

    cout << "Mostrando datos del curso 2: " << endl;
    curso2.mostrarDatos();
    
    cout << "Mostrando datos del curso 3: " << endl;
    curso3.mostrarDatos();
    return 0;
} */