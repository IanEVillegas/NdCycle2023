#include "Animal.h"
#include "sstream"
using namespace std;

Animal::Animal(string nombre, int edad, double peso)
	: nombre(nombre), edad(edad), peso(peso) {

}

Animal::~Animal() {

}

string Animal::toString() {
	stringstream r;

	r << "--------------------" << endl;
	r << "Nombre: " << nombre << endl;
	r << "Edad: " << edad << endl;
	r << "Peso: " << peso << endl;
	r << "--------------------" << endl << endl;
	
	return r.str();
}