#pragma once
#include "NodoCliente.h"
#include <string>
using namespace std;

class ListaCliente
{
public:
	ListaCliente();
	virtual ~ListaCliente();

	string toString();
	void agregar(Cliente*);
	Cliente* localizarPorCedula(string);

private:
	NodoCliente* primero;
	NodoCliente* actual;

};

