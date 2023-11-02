#pragma once
#include "Animal.h"
class NodoAnimal
{
public:
	NodoAnimal(Animal*, NodoAnimal*);
	~NodoAnimal();

	void setSiguiente(NodoAnimal*);
	NodoAnimal* getSiguiente();
	Animal* getDato();
private:
	Animal* dato;
	NodoAnimal* siguiente;
};

