#include "ListaAnimal.h"
#include "NodoAnimal.h"
#include "Cliente.h"

#include <iostream>
using namespace std;

int main()
{
    ListaAnimal* listaAnimal = new ListaAnimal();
    Animal* animal;
    Cliente* cliente;
   // Cliente* clienteExiste = nullptr;

    string nombre, ID, telefono, correo;
    string nombreAnimal;
    int edad;
    float peso;
    char opc;

    do
    {
        system("cls");
        cout << "\n\tVeterinaria San Luis\n" << endl;
        cout << "1. Registrar cliente & mascota." << endl;
        cout << "2. Buscar cliente por ID." << endl;
        cout << "3. Ver todo." << endl;
        cout << "4. Salir." << endl;
        cout << "Digite una opcion: ";
        cin >> opc;

        switch (opc)
        {
        case '1':
            system("cls");

            cout << "\tIngrese los datos del cliente\n" << endl;
            cout << "Nombre: "; cin >> nombre; cout << endl;
            cout << "Cedula: "; cin >> ID; cout << endl;
            cout << "Telefono: "; cin >> telefono; cout << endl;
            cout << "Correo: "; cin >> correo; cout << endl;

            cliente = new Cliente(nombre, ID, telefono, correo);

            cout << "\n\tIngrese los datos del animal\n" << endl;
            char SiNo;
            do
            {
                cout << "Nombre: "; cin >> nombreAnimal; cout << endl;
                cout << "Edad: "; cin >> edad; cout << endl;
                cout << "Peso: "; cin >> peso; cout << endl;

                animal = new Animal(nombreAnimal, edad, peso, cliente);
                listaAnimal->agregarAnimal(animal);
                
                cout << "Desea agregar otro animal? (S/N): "; cin >> SiNo; cout << endl;
            } while (SiNo == 'S' || SiNo == 's');

            system("pause");
            break;
        case '2':
            system("cls");
            cout << cliente->toString() <<"\n" << endl;

            cout << "Ingrese la cedula del cliente: ";
            cin >> ID;
            cout << listaAnimal->buscarAnimal(ID);
            system("pause");
            break;
        case'3':
            system("cls");
            cout << listaAnimal->toString();
            system("pause");
        }
    } while (opc != 4);

    return 0;
}