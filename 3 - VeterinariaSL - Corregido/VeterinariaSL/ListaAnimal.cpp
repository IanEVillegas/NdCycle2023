#include "ListaAnimal.h"

#include <sstream>
using namespace std;

ListaAnimal::ListaAnimal()
	:primero(nullptr), actual(nullptr)
{

}
ListaAnimal::~ListaAnimal()
{

}

string ListaAnimal::buscarAnimal(string identificacion)
{
	stringstream dato;

	actual = primero;

	while (actual != nullptr)
	{
		if (actual->getDato()->compararID() == identificacion)
		{
			Animal* aux = actual->getDato();
			dato << aux->toString() << endl;
		}
		actual = actual->getSiguiente();
	}
	return dato.str();
}
void ListaAnimal::agregarAnimal(Animal* animal)
{
	primero = new NodoAnimal(animal, primero);
}
bool ListaAnimal::estaVacio()
{
	return primero == nullptr;
}

//Cliente* ListaAnimal::buscarClientePorID(const string& identificacion)
//{
//	NodoAnimal* actual = primero;
//
//	while (actual != nullptr)
//	{
//		Animal* animal = actual->getDato();
//		Cliente* cliente = animal->getCliente();
//
//		if (cliente != nullptr && cliente->getIdentificacion() == identificacion)
//		{
//			return cliente;
//		}
//		actual = actual->getSiguiente();
//	}
//	return nullptr;
//}

string ListaAnimal::toString()
{
	stringstream datos;

	actual = primero;

	while (actual != nullptr)
	{
		Animal* aux = actual->getDato();
		datos << aux->toString() << endl;
		actual = actual->getSiguiente();
	}
	return datos.str();
}