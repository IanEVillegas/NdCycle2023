#include "ListaAnimal.h"
#include "NodoAnimal.h"
#include <sstream>
using namespace std;

ListaAnimal::ListaAnimal() 
	: primero(nullptr), actual(nullptr) {

}

ListaAnimal::~ListaAnimal() {

}

string ListaAnimal::toString() {
	stringstream x;
	actual = primero;
	Animal* animal = nullptr;

	x << "Animales pertenecientes a la persona indicada" << endl;
	x << "***********************************************" << endl << endl;

	while (actual) {
		animal = actual->getDato();
		x << animal->toString();
		actual = actual->getSiguiente();
	}
	return x.str();
}

void ListaAnimal::agregar(Animal* dato) {
	primero = new NodoAnimal(dato, primero);
}

