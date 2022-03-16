// Clase 1 P2.cpp 
// Punteros

#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int j = 13;
    int *punt;
    punt = &i;
    cout << *punt << endl; // Imprime el valor de i
    punt = &j;
    cout << *punt << endl; // Ahora imprime el valor de j
    int* otro = &i;
    cout << *otro + *punt << endl; // i + j
    int k = *punt;
    cout << k << endl; // Mismo valor que j
    /*
    int i;
    int* q; // q no tiene aún una dirección válida
    int* p = &i; // p toma una dirección válida
    q = p; // ahora q ya tiene una dirección válida
    q = NULL; // otra dirección válida para q
    */

    
    // Al copiar un puntero en otro, ambos apuntarán al mismo dato
    int x = 5;
    int* punt1 = NULL; // punt1 no apunta a nada
    int* punt2 = &x; // punt2 apunta a la variable x
    punt1 = punt2; // Ambos apuntan a la varible x
    *punt1 = 8;
    
    if (punt1 == punt2)
    {
        cout << "Apuntan al mismo dato" << endl;
    }
    else
    {
        cout << "No apuntan al mismo dato" << endl;
    }


    // Declaramos tipos para los punteros con distinto tipo de base

    typedef int* tIntPtr;
    typedef char* tCharPtr;
    typedef double* tDoublePtr;
    int  entero = 5;
    tIntPtr puntI = &entero;
    char caracter = 'C';
    tCharPtr puntC = &caracter;
    double real = 5.23;
    tDoublePtr puntD = &real;
    cout << *puntI << " " << *puntC << " " << *puntD << endl;

     // Con *puntero podemos hacer lo que con otros datos del tipo base


    // Los punteros pueden apuntar también a estructuras
   
    /* 
    typedef struct
    {
        int codigo;
        string nombre;
        double sueldo;
    } tRegistro;
    tRegistro registro;
    typedef tRegistro *tRe
    */


    return 0;
}
