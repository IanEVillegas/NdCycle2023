#include "Cliente.h"

#include <sstream>
using namespace std;

Cliente::Cliente(string nombre, string ID, string telefono, string correo)
	:nombre(nombre), ID(ID), telefono(telefono), correo(correo)
{

}

Cliente::~Cliente()
{

}

string Cliente::getIdentificacion()
{
	return ID;
}

string Cliente::toString()
{
	stringstream datos;

	datos << "\tDatos del cliente." << endl;
	datos << "Nombre: " << nombre << endl;
	datos << "Cedula: " << ID << endl;
	datos << "Telefono: " << telefono << endl;
	datos << "Correo: " << correo << endl;

	return datos.str();
}