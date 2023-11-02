#pragma once
#include <string>
using namespace std;

class Estudiante {
public:
    Estudiante(string nombre, string cedula, double promedio);
    double getPromedio();
    string toString();

private:
    string Nombre;
    string Cedula;
    double Promedio;
};