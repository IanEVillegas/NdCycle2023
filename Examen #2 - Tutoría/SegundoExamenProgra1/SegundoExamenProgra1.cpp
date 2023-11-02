#include "ListaCliente.h"
#include "Cliente.h"
#include "Animal.h"
#include <iostream>
using namespace std;

int main()
{
    //Base de datos inicial
    ListaCliente* clientes = new ListaCliente();
    int opcion = 0;

    do {
        cout << "Veterinaria San Luis" << endl;
        cout << "----------------------------------" << endl << endl;

        cout << "1. Registrar un nuevo cliente" << endl;
        cout << "2. Registrar una mascota a un cliente existente" << endl;
        cout << "3. Mostrar las mascotas pertenecientes a un cliente en especifico" << endl;
        cout << "4. Salir" << endl << endl;

        cout << "Digite un numero de opcion: "; cin >> opcion; cout << endl;

        system("cls");

        switch (opcion)
        {
        case 1: {
            string nombre = "", cedula = "", telefono = "", correo = "";

            cout << "-------------------------" << endl;
            cout << "Sistema de registro" << endl;
            cout << "-------------------------" << endl << endl;

            cout << "Digite el nombre: "; cin >> nombre; cout << endl;
            cout << "Digite la cedula: "; cin >> cedula; cout << endl;
            cout << "Digite el telefono: "; cin >> telefono; cout << endl;
            cout << "Digite el correo: "; cin >> correo; cout << endl;

            Cliente* nuevoCliente = new Cliente(nombre, cedula, telefono, correo);
            clientes->agregar(nuevoCliente);

            system("cls");

            cout << "-----------------------------" << endl;
            cout << "Cliente registrado con exito!" << endl;
            cout << "-----------------------------" << endl << endl;

            break;
        }
        case 2: {
            string cedula = "";

            cout << "-------------------------------" << endl;
            cout << "Sistema de registro de mascota" << endl;
            cout << "-------------------------------" << endl << endl;

            cout << clientes->toString() << endl;

            cout << "Digite la cedula del cliente al que le desea agregar una mascota: "; cin >> cedula; cout << endl;

            Cliente* cliente = clientes->localizarPorCedula(cedula);

            if (cliente) {
                string nombre = "";
                int edad = 0;
                double peso = 0.0;

                cout << "Informacion del cliente consultado: " << endl;
                cout << cliente->toString();
                cout << endl;

                cout << "Digite el nombre de la mascota: "; cin >> nombre; cout << endl;
                cout << "Digite la edad de la mascota: "; cin >> edad; cout << endl;
                cout << "Digite el peso de la mascota: "; cin >> peso; cout << endl;

                Animal* mascota = new Animal(nombre, edad, peso);

                ListaAnimal* animales = cliente->getAnimales(); // Para asignarle la mascota al cliente

                animales->agregar(mascota);

                system("cls");

                cout << "-----------------------------" << endl;
                cout << "Mascota registrada con exito!" << endl;
                cout << "-----------------------------" << endl << endl;

            }
            else {
                cout << "Cliente no encontrado!" << endl;
                break;
            }

            break;
        }
        case 3: {
            string cedula = "";

            cout << "-------------------------------" << endl;
            cout << "Sistema de consulta de mascotas" << endl;
            cout << "-------------------------------" << endl << endl;

            cout << clientes->toString() << endl;

            cout << "Digite la cedula del cliente al que le desea consultar sus mascotas: "; cin >> cedula; cout << endl;

            Cliente* cliente = clientes->localizarPorCedula(cedula);

            if (cliente) {
                cout << "Informacion del cliente consultado: " << endl;
                cout << cliente->toString();
                cout << endl;

                cout << cliente->mostrarInfoAnimales();

            }
            else {
                cout << "Cliente no encontrado!" << endl;
                break;
            }
            break;
        }
        case 4: {

            cout << "-------------------------" << endl;
            cout << "Que tenga un buen dia!" << endl;
            cout << "-------------------------" << endl;

            break;
        }
        default: {

            cout << "Opcion Incorrecta!" << endl;
            cout << "-------------------" << endl;

            break;
        }
            
        }
        system("pause");
        system("cls");
    } while (opcion != 4);

    return 0;
}