#pragma once
#include <string>
using namespace std;

class Animal
{
public:
	Animal(string,int,double);
	virtual ~Animal();

	string toString();

private:
	string nombre;
	int edad;
	double peso;

};

