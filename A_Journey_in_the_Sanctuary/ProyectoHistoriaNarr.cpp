/* Haber este es el proto para la historia narrada para Progra, se va a tratar de Los caballeros del Zodiaco */
/* zap363 Eva Luna AMK 1° Semestre*/
/* Espero lograr esto con ciclos, if y couts*/

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");
	int tuDecision;
	int tuDecision2;
	int rutaII = 2;
	int ruta = 1;
	int rutaIII = 3;
	int rutaIV = 4;
	int contador = 0;


	cout << "Era una bella mañana y tu acababas de salir de la estacion de camiones, habias recogido a una amiga y te disponias a llamar a un Uber " << endl;
	Sleep(800);
	cout << "cuando de repente oiste un sonido raro, de repente todo se volvio negro y cuando volviste en si, te viste que 1 Ammu, (si así se llama tu amiga) te habia aplastado " << endl;
	cout << "y 2 estabas en un cuarto desconocido en quien sabe donde, y lo PEOR POSEIDON EL DIOS DE TODOS LOS MARES Y SORRENTO te estaban viendo con cara de 'y este bicho raro de donde salio? y 'que rayos pasa aqui' " << endl << endl;
	cout << "En este momento tienes 2 opciones, La primera seria esperar a que Don Pose y Sorrento salgan del shock y ver haber que te dicen o tu preguntarles que si saben que sucedio, " << endl;
	cout << "pero con el conocido temperamento del devol que se cargan Don Pose y su mano derecha Sorrento no se si eso seria una buena idea" << endl;
	cout << "o la segunda, podrias correr for dear life y escapar por la puerta abierta que ves, mientras Don Pose y Sorrento siguen en shock, pero eso significaria no tener ninguna clase de información sobre que sucedio y porque sucedio, pero weno en fin tu decisión" << endl << endl;

	cout << "Presiona 1: para ver que te dice Poseidon y Sorrento " << endl << endl;
	cout << "Presiona 2: Para escapar for dear life en lo que Poseidon y Sorrento estan en shock " << endl;
	cin >> tuDecision;
	cout << endl;
	string Opcion1_1 = "Poseidon y Sorrento salen del el Shock y al verte a ti y a tu amiga te aplican la ranteación tipo 'que haces aqui' 'como llegaste aquí', Sorrento dijo que a la mejor eras una Espia de Atena, y Don Pose casi hace aguachile contigo y con tu amiga, pero al final todos se calmaron y Poseidon te invito a su Sala para que hablen y para que tu y tu amiga le expliquen como llegaron ahi";
	string Opcion1_2 = "En el shock corres for dear life";
	string Opcion2_1 = "te quedas con Don Pose ";
	string Opcion2_2 = " te quedas con Isaack";

	string rama1_0 = "Le explicas...";
	string rama2_0 = "Llegas al Santuario";

	string decision2 = "Don pose te dice que si quieres quedarte con el o con Isaack";
	string escoge3 = "Presiona 3 para quedarte con Don Pose ";
	string escoge4 = "Presiona 4 para quedarte con Isaack ";

	if (tuDecision == ruta)
	{

		contador = contador + 1;

	}

	if (tuDecision == rutaII)
	{

		contador = contador + 2;

	}


	if (contador == 1)
	{
		cout << Opcion1_1 << endl;
		cout << rama1_0 << endl;

		cout << decision2 << endl << endl;
		cout << escoge3 << endl;
		cout << escoge4 << endl;
		cin >> tuDecision2;
		cout << endl;
		if (tuDecision2 == rutaIII)
		{

			contador = contador + 3;

		}

		if (tuDecision2 == rutaIV)
		{

			contador = contador + 4;

		}

		if (contador == 3)
		{

			cout << Opcion2_1 << endl;

		}
		
		if (contador == 4)
		{

			cout << Opcion2_2 << endl;

		}

	}

	if (contador == 2)
	{

		cout << Opcion1_2 << endl;
		cout << rama2_0 << endl;


	}

}




