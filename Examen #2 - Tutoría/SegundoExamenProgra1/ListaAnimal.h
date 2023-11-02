#pragma once
#include "NodoAnimal.h"
#include <string>
using namespace std;

class ListaAnimal
{
public:
	ListaAnimal();
	virtual ~ListaAnimal();

	string toString();
	void agregar(Animal*);
	
private:
	NodoAnimal* primero;
	NodoAnimal* actual;

};

