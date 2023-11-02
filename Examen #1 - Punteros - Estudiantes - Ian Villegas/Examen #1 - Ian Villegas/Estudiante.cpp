#include "Estudiante.h"
#include <sstream>
using std::stringstream;

Estudiante::Estudiante(string nombre, string cedula, double promedio)
	: Nombre(nombre), Cedula(cedula), Promedio(promedio) {
}

double Estudiante::getPromedio() {
	return Promedio;
}

string Estudiante::toString() {
	//return "Nombre: " + Nombre 
	//	+ "\nCedula: " + Cedula 
	//	+ "\nPromedio: " + to_string(Promedio);
	stringstream dato;
	dato << "Nombre: " << Nombre << endl;
	dato << "Cedula: " << Cedula << endl;
	dato << "Promedio: " << Promedio << endl;
	return dato.str();
}
