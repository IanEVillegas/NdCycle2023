#include "NodoCliente.h"

NodoCliente::NodoCliente(Cliente* dato, NodoCliente* siguiente) : dato(dato), siguiente(siguiente) {

}

NodoCliente::~NodoCliente() {

}

Cliente* NodoCliente::getDato() {
	return dato;
}

NodoCliente* NodoCliente::getSiguiente() {
	return siguiente;
}

void NodoCliente::setSiguiente(NodoCliente* nodo) {
	siguiente = nodo;
}

