#pragma once
#include "Cliente.h"

#include <iostream>
using namespace std;

class Animal
{
public:
	Animal(string, int, float, Cliente*);
	~Animal();

	string compararID(); // Este hubiera sido en ListaCliente
	string toString();
private:
	string nombre;
	int edad;
	float peso;
	Cliente* cliente;
};

