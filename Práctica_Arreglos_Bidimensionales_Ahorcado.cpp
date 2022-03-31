// Ejercicio_Ahorcado.cpp 
// Kevin Cabrera
// Se declara un arreglo del tamaño del banco de palabras a usar, en este ejercicio el tamaño es de 5
// la palabra a adivinar se escoge dentro de estas opciones con una funcion random
// se pide al usuario que ingrese una letra para adivinar la palabra
// el usuario tendra hasta 5 oportunidades de equivocarse o perdera el juego, terminando asi el programa

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    // Se inicializa la variable char para la letra introducida por el usuario
    char letraUsuario = ' ';

    // Se declara una variable de control para indicar que se esta jugando
    bool jugando = true;

    // Se declara una variable de control para indicar que el usuario ha acertado una letra de la palabra
    bool acierto = false;

    // Se declara una variable para checar que la variable palabra oculta no tenga ningun ? (caracter para identificar la letra a adivinar)
    int contandoLetras = 0;

    // Se crea un arreglo de 5 posibles palabras a adivinar
    string palabras[5] = { "LUKE", "KENOBI", "YODA", "VADER", "DOOKU" };

    // Se inicializa la funcion random
    srand(time(0));

    // Se escoge una palabra dentro del arreglo con la funcion random
    int palabraAdivinar = rand() % 5;

    // El jugador tendra hasta 5 posibilidades de equivocarse para adivinar la palabra
    int intentos = 5;

    cout << R"(
                 8888888888 888
                 888        888                     __
                 888        888                    |         |
                 8888888    888                    |         0
                 888        888                    |        /|\
                 888        888                    |        / \
                 888        888                    |
                 8888888888 888                    |



                          888                                             888
                          888                                             888
                          888                                             888
                  8888b.  88888b.   .d88b.  888d888 .d8888b  8888b.   .d88888  .d88b.
                     "88b 888 "88b d88""88b 888P"  d88P"        "88b d88" 888 d88""88b
                 .d888888 888  888 888  888 888    888      .d888888 888  888 888  888
                 888  888 888  888 Y88..88P 888    Y88b.    888  888 Y88b 888 Y88..88P
                 "Y888888 888  888  "Y88P"  888     "Y8888P" Y888888  "Y88888  "Y88P"
    )" << '\n' << endl;


    // Instrucciones
    cout << "AHORCADO" << endl;
    cout << "Adivina el personaje de Star Wars." << endl;
    cout << "Tienes 5 oportunidades de equivocarte, si no adivinas pierdes el juego." << endl;
    cout << "Ingresa cada letra en MAYUSCULA para completar el nombre del personaje." << endl;

    // Se inicializa una variable que sera usada como
    string palabraOculta = "";

    // Guarda los espacios de cada letra de la palabra escogida
    for (int i = 0; i < palabras[palabraAdivinar].length(); i++)
    {
        // += Guarda lo que tenia anteriormente añadiendo espacios por cada palabra escogida
        palabraOculta += "?"; // Simbolo para representar una letra
    }
    // Ciclo para continuar y limpiar la pantalla del titulo
    while (letraUsuario != '1')
    {
        cout << "Ingrese la tecla '1' para continuar" << endl;
        cin >> letraUsuario;
        if (letraUsuario == '1')
        {
            system("cls");
        }
    }

    // Ciclo para recorrer la palabra escogida al azar por caracter
    while (jugando)
    {
        // Se inicializan los aciertos 
        acierto = false;

        // Se inicializa la cuenta a 0
        contandoLetras = 0;

        // Se imprime la palabra a adivinar
        cout << "Personaje a adivinar: " << endl;
        cout << palabraOculta << endl;
        cout << "Intentos restantes: " << endl;
        cout << intentos << endl;

        // Dependiendo del numero de intentos fallidos del usuario se desplegara un grafico representando 
        // en cada caso lo que le falta al usuario para quedar ahorcado
        switch (intentos)
        {
        case 5:
            cout << "____________" << endl;
            cout << "|       |" << endl;
            cout << "|       |" << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|           " << endl;
            cout << "|           " << endl;
            cout << "|          " << endl;
            cout << "|           " << endl;
            cout << "\--------------" << endl;
            break;

        case 4:
            cout << "____________" << endl;
            cout << "|       |" << endl;
            cout << "|       |" << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|           " << endl;
            cout << "|      / \\" << endl;
            cout << "|     /   \\" << endl;
            cout << "|    /     \\" << endl;
            cout << "\--------------" << endl;
            break;

        case 3:
            cout << "____________" << endl;
            cout << "|       |" << endl;
            cout << "|       |" << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|       |  " << endl;
            cout << "|       |  " << endl;
            cout << "|       |   " << endl;
            cout << "|      / \\" << endl;
            cout << "|     /   \\" << endl;
            cout << "|    /     \\" << endl;
            cout << "\--------------" << endl;
            break;

        case 2:
            cout << "____________" << endl;
            cout << "|       |" << endl;
            cout << "|       |" << endl;
            cout << "|          " << endl;
            cout << "|          " << endl;
            cout << "|      /|\\ " << endl;
            cout << "|     / | \\" << endl;
            cout << "|    /  |  \\" << endl;
            cout << "|      / \\" << endl;
            cout << "|     /   \\" << endl;
            cout << "|    /     \\" << endl;
            cout << "\--------------" << endl;
            break;

        case 1:
            cout << "____________" << endl;
            cout << "|       |" << endl;
            cout << "|       |" << endl;
            cout << "|      ___  " << endl;
            cout << "|     (^_^)    " << endl;
            cout << "|      /|\\ " << endl;
            cout << "|     / | \\" << endl;
            cout << "|    /  |  \\" << endl;
            cout << "|      / \\" << endl;
            cout << "|     /   \\" << endl;
            cout << "|    /     \\" << endl;
            cout << "\--------------" << endl;
            break;
        }

        // Se pide al usuario ingresar una letra para completar la palabra a adivinar
        cout << "Ingrese una letra: " << endl;
        cin >> letraUsuario;

        // Se inicializa un ciclo para recorrer cada caracter de la palabra
        for (int i = 0; i < palabras[palabraAdivinar].length(); i++)
        {
            // Compara la palabra ingresada por el usuario con la palabra a adivinar letra por letra
            // Si en la posicion actual hay un ? y ademas es una letra acertada 
            if (palabraOculta[i] == '?' && letraUsuario == palabras[palabraAdivinar][i])
            {
                // Colocara la letra introducida por el usuario
                palabraOculta[i] = letraUsuario;
                // La bandera se hace verdadera
                acierto = true;
            }
        }
        // Si el usuario acierta una letra de la palabra a adivinar
        if (acierto)
        {
            system("cls");
            cout << "Has acertado una letra de la palabra" << endl;
        }
        else // Si no
        {
            // Restara los intentos del usuario por cada equivocacion
            intentos--;
            system("cls");
        }

        for (int i = 0; i < palabraOculta.length(); i++)
        {
            // Si en la posicion actual de la palabra oculta es diferente al caracter representando una letra a adivinar
            if (palabraOculta[i] != '?')
            {
                // Con pasos de uno en uno en la variable contandoLetras
                contandoLetras++;
            }
        }

        // Si hay aciertos en todas las letras entonces la palabra ha sido adivinada
        if (contandoLetras == palabras[palabraAdivinar].length())
        {
            system("cls");
            cout << "LA PALABRA HA SIDO ADIVINADA!!" << endl;
            cout << "HAS GANADO :) !!" << endl;
            // Se cambia la variable de control para indicar que se ha terminado el programa
            jugando = false;
        }

        // Si el usuario se ha quedado sin intentos 
        if (intentos == 0)
        {
            // Se cambia la variable de control para indicar que se ha terminado el programa
            jugando = false;
            system("cls");
            cout << "LA PALABRA NO HA SIDO ADIVINADA!!" << endl;
            cout << "HAS PERDIDO :(" << endl;

            cout << "____________" << endl;
            cout << "|       |" << endl;
            cout << "|       |" << endl;
            cout << "|      ___" << endl;
            cout << "|     (x_x)  " << endl;
            cout << "|      /|\\ " << endl;
            cout << "|     / | \\" << endl;
            cout << "|    /  |  \\" << endl;
            cout << "|      / \\" << endl;
            cout << "|     /   \\" << endl;
            cout << "|    /     \\" << endl;
            cout << "\--------------" << endl;

        }
    }
}