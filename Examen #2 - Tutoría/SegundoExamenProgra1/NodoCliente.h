#pragma once
#include <string>
#include "Cliente.h"
using namespace std;

class NodoCliente
{
public:
	NodoCliente(Cliente*, NodoCliente*);
	virtual ~NodoCliente();

	Cliente* getDato();
	NodoCliente* getSiguiente();
	void setSiguiente(NodoCliente*);


private:
	Cliente* dato;
	NodoCliente* siguiente;






};

