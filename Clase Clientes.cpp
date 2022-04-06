// Clase Clientes.cpp 
// Kevin Cabrera

#include <iostream>
#include<string>
using namespace std;

class Cliente
{
// Brindamos de atributos la clase
public:
	int idCliente;
	string nombreCliente;
	string apellidoCliente;
	int edadCliente;
	int librosPrestamo;
	string numContacto;
	string direccionCliente;

	// Constructor de la Clase
	//Cliente(int,char, char, int, int, string, string);
	// Declaramos el metodo a utilizar
	void agregarCliente();
	void editarCliente();

};

// Se asignana datos al constructor de la Clase
/*
Cliente::Cliente(int _id, char _nombre, char _apellido, int _edad, int _librosPrestamo, string _contacto, string _direccion)
{
	// Asignacion de valores a cada variable del constructor
	idCliente = _id;
	nombreCliente = _nombre;
	apellidoCliente = _apellido;
	edadCliente = _edad;
	librosPrestamo = _librosPrestamo;
	numContacto = _contacto;
	direccionCliente = _direccion;
}
*/

// Definicion del metodo agregarCliente
void Cliente::agregarCliente()
{
	// Se piden los datos del cliente al usuario para ser almacenados
	cout << "Ingresa el nombre del Cliente: " << endl;
	cin >> nombreCliente;
	cout << "Ingresa el apellido del Cliente: " << endl;
	cin >> apellidoCliente;
	cout << "Ingresa la edad del Cliente: " << endl;
	cin >> edadCliente;
	cout << "Libros que el cliente se llevara en prestamo: " << endl;
	cin >> librosPrestamo;
	cout << "Ingresa el numero telefonico del Cliente: " << endl;
	cin >> numContacto;
	cout << "Ingresa la direccion de contacto del Cliente: " << endl;
	cin >> direccionCliente;

}

// Definicion del metodo agregarCliente
void Cliente::editarCliente()
{
	char decision;
	bool editarotroElemento = false;
	char salirbucle;
	
	cout << "Has entrado en el modo edicion de Cliente" << endl;
	cout << "\n" << endl;
	cout << "Ingresa el elemento a editar: " << endl;
	cout << "1. Nombre del Cliente." << endl;
	cout << "2. Apellido del Cliente." << endl;
	cout << "3. Edad del Cliente." << endl;
	cout << "4. Libros en prestamo." << endl;
	cout << "5. Numero telefonico del Cliente." << endl;
	cout << "6. Direccion del Cliente." << endl;
	cin >> decision;

	// Segun la decision del usuario editara un elemento
	do
	{
		switch (decision)
		{
		case '1':
			cout << "Edita el nombre del Cliente: " << endl;
			cin >> nombreCliente;
			break;

		case '2':
			cout << "Edita el apellido del Cliente: " << endl;
			cin >> apellidoCliente;
			break;

		case '3':
			cout << "Edita la edad del Cliente: " << endl;
			cin >> edadCliente;
			break;

		case '4':
			cout << "Edita los libros en prestamo del Cliente.: " << endl;
			cin >> librosPrestamo;
			break;

		case '5':
			cout << "Edita el numero telefonico del Cliente:" << endl;
			cin >> numContacto;
			break;

		case '6':
			cout << "Edita la direccion de contacto del Cliente:" << endl;
			cin >> direccionCliente;
			break;
		}

		// Se le pregunta al usuario si desea editar otro elemento del Cliente
		cout << "Quieres editar otro elemento?" << endl;
		cout << "Ingresa 1 para SI." << endl;
		cout << "Ingresa 2 para NO." << endl;
		cin >> salirbucle;

		// Condicion para salir del bucle
		if (salirbucle == '2')
		{
			// Si el bool es verdadero se termina el bucle de edicion de Cliente
			salirbucle = true;
		}


	} while (salirbucle == false); // Se repite el bucle de edicion mientras bool sea false
	
}

int main()
{
	
}

