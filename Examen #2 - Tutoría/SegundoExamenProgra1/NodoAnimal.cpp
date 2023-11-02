#include "NodoAnimal.h"


NodoAnimal::NodoAnimal(Animal* dato, NodoAnimal* siguiente) 
	: dato(dato), siguiente(siguiente) {

}

NodoAnimal::~NodoAnimal() {

}

Animal* NodoAnimal::getDato() {
	return dato;
}

NodoAnimal* NodoAnimal::getSiguiente() {
	return siguiente;
}

void NodoAnimal::setSiguiente(NodoAnimal* nodo) {
	siguiente = nodo;
}