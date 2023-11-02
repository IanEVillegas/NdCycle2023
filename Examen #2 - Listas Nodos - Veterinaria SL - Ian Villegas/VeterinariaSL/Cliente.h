#pragma once

#include <iostream>
using namespace std;

class Cliente
{
public:
	Cliente(string, string, string, string);
	~Cliente();

	string getIdentificacion();
	string toString();
private:
	string nombre;
	string ID;
	string telefono;
	string correo;
};

