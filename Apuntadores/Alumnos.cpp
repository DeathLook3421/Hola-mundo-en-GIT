#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    std::string nombre;
    int nota[3];
};

int main() {
	const int cantidadAlumnos = 3;
	const int cantidadNotas = 3;
    Alumno estudiantes[cantidadAlumnos];
    Alumno* ptr;
    for (int i=0; i<cantidadAlumnos; i++) {
    	cout<<"Ingrese el nombre del estudiante "<<i+1;
		cin>>*(ptr+i);
		for (int j=0; j<cantidadNotas; j++) {
			
			estudiantes[i].nota[j]=;
		}
	}

    Alumno* ptrEstudiante = &estudiante; // Apuntador a la estructura

    std::cout << "Datos del estudiante:" << std::endl;
    std::cout << "Nombre: " << ptrEstudiante->nombre << std::endl;
    std::cout << "Notas: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << ptrEstudiante->nota[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
