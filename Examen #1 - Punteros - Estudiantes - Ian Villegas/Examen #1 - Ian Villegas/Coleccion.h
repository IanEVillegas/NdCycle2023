#pragma once
#include "Estudiante.h"

class Coleccion {
public:
	Coleccion(int capacidad);
	~Coleccion();
	void agregarEstudiante(Estudiante* estudiante);
	double porcentajeAprobacion();
	double porcentajeReprobacion();
	bool aprobacionMayorQueReprobacion();
	Estudiante* buscaMejorAlumno();
	string toString();

private:
	Estudiante** punteroEstudiantes;
	int capacidad;
	int cantEstudiantes;
};