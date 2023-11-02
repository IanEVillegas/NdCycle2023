#include "NodoAnimal.h"

NodoAnimal::NodoAnimal(Animal* dato, NodoAnimal* siguiente)
	: dato(dato), siguiente(siguiente)
{

}

NodoAnimal::~NodoAnimal()
{

}

void NodoAnimal::setSiguiente(NodoAnimal* siguiente)
{
	siguiente = siguiente;
}

NodoAnimal* NodoAnimal::getSiguiente()
{
	return siguiente;
}

Animal* NodoAnimal::getDato()
{
	return dato;
}