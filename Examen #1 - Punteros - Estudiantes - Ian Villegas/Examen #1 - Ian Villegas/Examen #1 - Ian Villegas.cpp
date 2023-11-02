#include <iostream>
using namespace std;
#include "Estudiante.h"
#include "Coleccion.h"

int main() {
    Coleccion coleccion(30);

    char agregar;
    do
    {
        string nombre, cedula;
        double promedio;

        cout << "\tInformacion de estudiantes.\n" << endl;
        cout << "Digite el nombre del estudiante: ";
        cin >> nombre;
        cout << "Digite el numero de cedula del estudiante: ";
        cin >> cedula;
        cout << "Digite el promedio del estudiante: ";
        cin >> promedio;

        Estudiante* nuevoEstudiante = new Estudiante(nombre, cedula, promedio);
        coleccion.agregarEstudiante(nuevoEstudiante);

        cout << "Si desea agregar otro estudiante, digite S o N: ";
        cin >> agregar;
        cout << "\n";
    } while (agregar == 'S' || agregar == 's');

    //punteroEstudiantes predeterminados
    coleccion.agregarEstudiante(new Estudiante("Ian", "207800171", 85.5));
    coleccion.agregarEstudiante(new Estudiante("Esteban", "12345678", 72.0));
    coleccion.agregarEstudiante(new Estudiante("Joocabed", "12345678", 65.2));
    coleccion.agregarEstudiante(new Estudiante("Juli", "87654321", 50.0));

    //Mostrando esos estudantes
    cout << coleccion.toString() << endl;

    //Muestra el estudiante con mejor nota dentro de los que ya hay
    Estudiante* mejorAlumno = coleccion.buscaMejorAlumno();
    if (mejorAlumno->getPromedio()) {
        cout << "Mejor Alumno:\n" << mejorAlumno->toString() << "\n" << endl;
    }

    //Muestra el porcentaje de aprobación y de reprobados
    cout << "Porcentaje de Aprobacion: " << coleccion.porcentajeAprobacion() << "%" << endl;
    cout << "Porcentaje de Reprobacion: " << coleccion.porcentajeReprobacion() << "%" << endl;

    //Muestra un simple mensaje de cómo está los porcentajes anteriores
    if (coleccion.aprobacionMayorQueReprobacion()) {
        cout << "El porcentaje de aprobacion es mayor que el percentaje de reprobacion." << endl;
    }
    else {
        cout << "El porcentaje de reprobacion es mayor que el porcenyaje de aprobacion." << endl;
    }

    return 0;
}
