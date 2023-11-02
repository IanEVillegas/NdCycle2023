#pragma once
#include <string>
#include "Animal.h"
using namespace std;

class NodoAnimal
{
public:
	NodoAnimal(Animal*, NodoAnimal*);
	virtual ~NodoAnimal();

	Animal* getDato();
	NodoAnimal* getSiguiente();
	void setSiguiente(NodoAnimal*);

private:
	Animal* dato;
	NodoAnimal* siguiente;

};

