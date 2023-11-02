#include "Coleccion.h"
#include <sstream>
using std::stringstream;//using namespace std;

Coleccion::Coleccion(int capacidad) : capacidad(capacidad), cantEstudiantes(0) {
    punteroEstudiantes = new Estudiante * [capacidad];
}

Coleccion::~Coleccion() {
    for (int i = 0; i < cantEstudiantes; i++) {
        delete punteroEstudiantes[i];
    }
    delete[] punteroEstudiantes;
}

void Coleccion::agregarEstudiante(Estudiante* estudiante) {
    if (cantEstudiantes < capacidad) {
        punteroEstudiantes[cantEstudiantes++] = estudiante;
    }
}

double Coleccion::porcentajeAprobacion() {
    int aprobados = 0;
    for (int i = 0; i < cantEstudiantes; i++) {
        if (punteroEstudiantes[i]->getPromedio() >= 70.0) {
            aprobados++;
        }
    }
    return (aprobados * 100.0) / cantEstudiantes;
}

double Coleccion::porcentajeReprobacion() {
    return 100.0 - porcentajeAprobacion();

    //int reprobados = 0;
    //for (int i = 0; i < cantEstudiantes; i++) {
    //    if (punteroEstudiantes[i]->getPromedio() <= 69.0) {
    //        reprobados++;
    //    }
    //}
    //return (reprobados * 100.0) / cantEstudiantes;
}

bool Coleccion::aprobacionMayorQueReprobacion() {
    return porcentajeAprobacion() > porcentajeReprobacion();
}

Estudiante* Coleccion::buscaMejorAlumno() {

    Estudiante* mejorAlumno = punteroEstudiantes[0];
    for (int i = 1; i < cantEstudiantes; i++) {
        if (punteroEstudiantes[i]->getPromedio() > mejorAlumno->getPromedio()) {
            mejorAlumno = punteroEstudiantes[i];
        }
    }
    return mejorAlumno;
}

string Coleccion::toString() {
    string datos = "punteroEstudiantes:\n";
    for (int i = 0; i < cantEstudiantes; i++) {
        datos += punteroEstudiantes[i]->toString() + "\n";
    }
    return datos;

    //stringstream datos;
    //for (int i = 0; i < cantEstudiantes; i++)
    //{
    //    datos << punteroEstudiantes[i]->toString();
    //}
    //return datos.str();
}
