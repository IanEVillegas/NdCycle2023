#pragma once
#include <string>
#include "ListaAnimal.h"
using namespace std;


class Cliente
{
public:
	Cliente(string,string,string,string);
	virtual ~Cliente();

	string toString();
	string mostrarInfoAnimales();
	void agregarAnimal(Animal*);
	string getCedula();
	ListaAnimal* getAnimales();

private:
	string nombre;
	string cedula;
	string telefono;
	string correo;
	ListaAnimal* animales;

};

