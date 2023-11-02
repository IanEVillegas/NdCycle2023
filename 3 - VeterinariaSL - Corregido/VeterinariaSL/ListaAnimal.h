#pragma once
#include "NodoAnimal.h"
#include "Animal.h"
#include "Cliente.h"

class ListaAnimal
{
public:
	ListaAnimal();
	~ListaAnimal();

	string buscarAnimal(string);
	void agregarAnimal(Animal*);
	bool estaVacio(); // No necesario
	string toString();

private:
	NodoAnimal* primero;
	NodoAnimal* actual;
};

