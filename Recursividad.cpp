// Kevin Cabrera
// Programa que pide al usuario ingresar un numero entero y lo devolvera en orden inverso
// aplicando recursividad y con otro metodo imprimira el mismo resultado pero aplicando colas

#include <iostream>
#include<string>
using namespace std;

//Inicializamos nodo 
struct nodo
{
    char caracter;
    nodo* next;
};

//creamos lista
class cola
{
    nodo* rear, * front;
public:
    // Constructor de lo clase 
    cola()
    {
        // Se inician los elementos trasero y frontal en NULO
        rear = NULL; front = NULL;
    }
    void insertarDatos(int);
    void qdisplay();
    ~cola();
};

//Metodo  para insertar datos
void cola::insertarDatos(int newcaracter)
{
    // Se crea un apuntador de tipo nodo temporal
    nodo* temp;
    // Se crea un nuevo nodo (apunta a un nuevo nodo)
    temp = new nodo;
    // Asigna un valor al nodo para almacenarlo
    temp->caracter = newcaracter;
    // Apunta al siguiente nodo aun no creado
    temp->next = NULL;
    // Si el elemento trasero de la cola es NULO (siempre sera nulo en la primera vez que se crea un nodo)
    if (rear == NULL)
    {
        // Se le asigna al elemento trasero el nodo temporal
        rear = temp;
        // Al elemento frontal se le asigna el mismo nodo ya que por el momento sólo existe un elemento único
        // es tanto el frontal y el trasero
        front = temp;
    }
    // Como la cola ya tiene elemento trasero, los demás elementos irán directo al else
    else
    {
        // Se accede al elemento trasero y se apunta al siguiente nodo que será el valor temporal (que se acaba de crear)
        rear->next = temp;
        rear = temp;
    }

}

//Metodo para mostrar datos
void cola::qdisplay()
{
    // Se crea un nuevo nodo el cual se le asigna al elemento frontal
    nodo* temp = front;
    // Mientras el valor temporal sea distinto de NULO recorrerá los siguientes nodos
    while (temp != NULL)
    {
        cout << temp->caracter << endl;
        // Recorre los siguientes nodos
        temp = temp->next;
    }
}


//Destructor, borra dato por dato
cola::~cola()
{
    while (front != NULL)
    {
        nodo* temp = front;
        front = front->next;
        delete temp;
    }
}



// Metodo para ordenar el numero entero ingresado usando recursividad
int reverseNumber(int n)
{
    // Se inicializan variables estaticas
    static int temp, sum;

    // En condiciones de que el numero entero sea mayor que 0
    if (n > 0)
    {

        temp = n % 10;
        sum = sum * 10 + temp;

        reverseNumber(n / 10);

    }
    else
    {

        return sum;
    }

}

int main()
{
    // Variables locales del metodo principal
    string stringTransformation;
    int n, reverse;

    cout << "Ingresa un numero entero: " << endl;
    cin >> n;

    reverse = reverseNumber(n);

    cout << "EL numero invertido de lo que se ingreso es: " << endl;;
    cout << reverse << endl;

    // Conversion de los numeros enteros a cadena de caracteres
    stringTransformation = to_string(reverse);

    // Se llama al constructor de la cola para crear el objeto
    cola estructuradeDatos;

    // Ciclo para contar el tamanio de la cadena de caracteres con iteraciones por cada caracter
    for (int i = 0; i < stringTransformation.length(); i++)
    {
        // Llama al constructor y al metodo para llenar los datos con los caracteres de stringTransformation datos "i" para cada ciclo
        estructuradeDatos.insertarDatos(stringTransformation[i]);
    }

    cout << "Ordenamiento reverso del numero entero original usando colas: " << endl;
    // Imprime los datos en nuevo orden en forma de char
    estructuradeDatos.qdisplay();

    return 0;
}