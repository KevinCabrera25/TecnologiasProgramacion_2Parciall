// Arreglos.cpp 
#include <iostream>
using namespace std;

int main()
{
	double a = 15;
	double* p1, * p2, * p3;
	p1 = &a; // Accede al valor de la variable (apunta a "a")
	p2 = new double; // Reserva almacenamiento en la memoria para crear el double
	*p2 = *p1; // Se le asigna valor a p2
	p3 = new double; // Reserva almacenamiento en la memoria para crear el double
	*p3 = 123.45; // Se le asigna valor a p3
	// Imprime los valores que cada puntero tiene almacenado (apuntado)
	cout << *p1 << endl;
	cout << *p2 << endl;
	cout << *p3 << endl;
	// Libera memoria que los punteros tenían reservadas
	delete p2;
	delete p3;

	return 0;
}
