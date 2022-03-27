// AroblBinario_Pokemon.cpp 
// Kevin Cabrera

#include <iostream>
#include <cstdlib>
using namespace std;

// Se declara la estructura de nodo
struct nodo
{
    int ptsFuerza;
    char tipo;
    struct nodo* izq, * der;
};

typedef struct nodo* ABB;

// Creación de nodos tomando en cuenta la variable entera en los Puntos de Fuerza
ABB crearNodo(int x, char y)
{
    // Creación del nuevo nodo en la estructura de nodo
    ABB newNodo = new(struct nodo);
    // Se le asigna al nuevo nodo una variable entera para los Puntos de Fuerza
    newNodo->ptsFuerza = x;
    // Se le asigna al nuevo nodo una variable caracter para el tipo de Pokemon
    newNodo->tipo = y;
    // Se inicializan las ramificaciones del árbol en NULO
    newNodo->izq = NULL;
    newNodo->der = NULL;

    return newNodo;
}


// Método para insertar pokemones a la izquierda o deracha según su Tipo y Puntos de Fuerza
void insertarPokemon(ABB& arbol, int x, char y) // Incluimos la estructura del nodo y se crea una variable arbol, 
                                                // además de la variable x para los Puntos de Fuerza y "y" para el Tipo
{
    // Si el arbol es NULO
    if (arbol == NULL)
    {
        // Entonces se le asigna un nuevo nodo
        arbol = crearNodo(x, y); 
    }
    else
    {
        // Si el Tipo del nuevo nodo es de Fuego
        if (arbol->tipo == 'F')
        {
            // Comparacion con el tipo Planta
            if (y == 'P')
            {
                // Se manda a la izquierda
                insertarPokemon(arbol->izq, x, y);
            }
            // Comparacion con el tipo Agua
            if (y == 'A')
            {
                // Se manda a la derecha
                insertarPokemon(arbol->der, x, y);
            }
            // Si son del mismo tipo
            if (y == arbol->tipo)
            {
                // Se compara por puntos de Fuerza
                if (x < arbol->ptsFuerza)
                {
                    // Manda el nodo a la izquierda
                    insertarPokemon(arbol->izq, x, y);
                }
                else // Si no
                {
                    // Manda el nodo a la derecha
                    insertarPokemon(arbol->der, x, y);
                }
            }
        }
        if (arbol->tipo == 'A') // Si el tipo del nuevo nodo es de Agua
        {
            // Comparacion con el tipo Fuego
            if (y == 'F') 
            {
                // Se manda a la izquierda
                insertarPokemon(arbol->izq, x, y);
            }
            // Comparacion con el tipo Planta
            if (y == 'P') 
            {
                // Se manda a la derecha
                insertarPokemon(arbol->der, x, y);
            }
            // Si es del mismo tipo
            if (y == arbol->tipo) 
            {
                // Comparacion por Puntos de Fuerza
                if (x < arbol->ptsFuerza)
                {
                    // Se manda a la izquierda
                    insertarPokemon(arbol->izq, x, y);
                }
                else 
                {
                    // Se manda a la derecha
                    insertarPokemon(arbol->der, x, y);
                }
            }
        }
        // Si el tipo del nuevo nodo es Planta
        if (arbol->tipo == 'P')
        {
            // Comparacion con el tipo Agua
            if (y == 'A')
            {
                // Se manda a la izquierda
                insertarPokemon(arbol->izq, x, y);
            }
            // Comparacion tipo Fuego
            if (y == 'F')
            {
                // Se manda a la derecha
                insertarPokemon(arbol->der, x, y);
            }
            // Si es del mismo tipo
            if (y == arbol->tipo)
            {
                // Comparacion por Puntos de Fuerza
                if (x < arbol->ptsFuerza)
                {
                    // Se manda a la izquierda
                    insertarPokemon(arbol->izq, x, y);
                }
                else
                {
                    // Se manda a la derecha
                    insertarPokemon(arbol->der, x, y);
                }
            }
        }
    }


}

// Metodo de impresion del arbol
void displayArbol(ABB arbol, int n) // Se llama a la estructura de arbol y se declara una varible para el nodo, asi se imprimiran los demás nodos en ciclo
{
    if (arbol == NULL)
        return;

    // Recursividad
    displayArbol(arbol->der, n + 1);
    // Se declara el ciclo para la impresion de los siguientes datos introducidos por el usuario
    for (int i = 0; i < n; i++)
        cout << " ";
    // Se llama al arbol para acceder a los Puntos de Fuerza
    cout << arbol->ptsFuerza << endl;
    // Recursividad
    displayArbol(arbol->izq, n + 1);
}


int main()
{
    ABB arbol = NULL; // Se crea el arbol y se inicializa en NULO
    int n; // Variable para los nodos;
    int x; // Variable que se inserta en cada nodo como los Puntos de Fuerza
    char y; // Variable que se inserta en cada nodo como el Tipo de Pokemon

    cout << " \n \n [ ARBOL BINARIO POKEMON ] \n \n" << endl;
    cout << "Ingresa el numero de pokemones a comparar: " << endl; // Numero de nodos del arbol
    cin >> n; // El usuario ingresa el numero de nodos del arbol
    cout << endl;

    // Ciclo para pedir al usuario que ingrese el siguiente elemento del arbol por nodos
    for (int i = 0; i < n; i++)
    {
        cout << "Puntos de Fuerza del Pokemon " << i + 1 << ":" << endl; // Recorre al siguiente nodo
        cin >> x; // El usuario ingresa los Puntos de Fuerza de cada elemento (nodo)
        cout << "Tipo de Pokemon " << endl;
        cout << "P---Planta. F---Fuego. A---Agua" << i + 1 << ":" << endl;
        cin >> y;
        insertarPokemon(arbol, x, y); // Se llama al metodo insertar con las varibles arbol y Puntos de Fuerza (x)
    }

    cout << "Los Pokemones que has introducido se comparan de la siguiente manera: " << endl;
    displayArbol(arbol, 0); // Se llama al metodo displayArbol para mostrar los elementos del arbol binario 



    system("pause");
    return 0;
}