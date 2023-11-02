#include "Animal.h"
#include <sstream>
using namespace std;

Animal::Animal(string nombre, int edad, float peso, Cliente* cliente)
	: nombre(nombre), edad(edad), peso(peso), cliente(cliente)
{

}

Animal::~Animal()
{

}

string Animal::compararID()
{
	return cliente->getIdentificacion(); // Del cliente
}

string Animal::toString()
{
	stringstream datos;

	datos << cliente->toString();
	datos << "\tDatos del animal." << endl;
	datos << "Nombre: " << nombre << endl;
	datos << "Edad: " << edad << endl;
	datos << "Peso: " << peso << endl;

	return datos.str();
}