#include "Cliente.h"
#include <sstream>
using namespace std;


Cliente::Cliente(string nombre, string cedula, string telefono, string correo)
	: nombre(nombre), cedula(cedula), telefono(telefono), correo(correo), animales(new ListaAnimal()) {

}

Cliente::~Cliente() {

}

string Cliente::toString() {
	stringstream r;

	r << "------------------------------------------------------------------" << endl;
	r << "Nombre: " << nombre << "  Cedula: " << cedula << endl;
	r << "Telefono: " << telefono << "  Correo: " << correo << endl;
	r << "------------------------------------------------------------------" << endl << endl;

	return r.str();
}

string Cliente::mostrarInfoAnimales() {
	return animales->toString();
}

void Cliente::agregarAnimal(Animal* dato) {
	animales->agregar(dato);
}

string Cliente::getCedula() {
	return cedula;
}

ListaAnimal* Cliente::getAnimales() {
	return animales;
}