#include <iostream>
using namespace std;
template <class T>
class CMateria {
    private:
        string nombreMateria;
        int clave;
        T calificacion;
    public:
        CMateria(string nombreMateria, int clave, T calificacion) {
            this->nombreMateria = nombreMateria;
            this->clave = clave;
            this->calificacion = calificacion;
        }

        ~CMateria() { }
        
        void mostrarDatos() {
            cout << "Nombre Materia: " << nombreMateria << endl;
            cout << "Clave: " << clave << endl;
            cout << "Calificacion: " << calificacion << endl;
        }

        void setCalificacion(T calificacion) { this->calificacion = calificacion; }
        T getCalificacion() { return this->calificacion; }
};


