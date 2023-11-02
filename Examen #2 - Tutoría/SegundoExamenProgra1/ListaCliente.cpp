#include "ListaCliente.h"
#include "NodoCliente.h"
#include <sstream>
using namespace std;

ListaCliente::ListaCliente() 
	: primero(nullptr), actual(nullptr) {

}

ListaCliente::~ListaCliente() {

}

string ListaCliente::toString() {
	stringstream x;
	actual = primero;
	Cliente* cliente = nullptr;

	x << "Lista de clientes" << endl;
	x << "********************" << endl << endl;

	while (actual) {
		cliente = actual->getDato();
		x << cliente->toString();
		actual = actual->getSiguiente();
	}
	return x.str();
}

void ListaCliente::agregar(Cliente* dato) {
	primero = new NodoCliente(dato, primero);
}

Cliente* ListaCliente::localizarPorCedula(string cedula) {
	actual = primero;
	Cliente* cliente = nullptr;

	while (actual) {
		cliente = actual->getDato();
		if (cliente->getCedula() == cedula) {
			return cliente;
		}
		actual = actual->getSiguiente();
	}
	return nullptr;
}