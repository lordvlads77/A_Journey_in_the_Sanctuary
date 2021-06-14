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

	Sleep(1000);
	cout << "Era una bella mañana y tu acababas de salir de la estacion de camiones, habias recogido a una amiga y te disponias a llamar a un Uber " << endl;
	Sleep(9150);
	cout << "cuando de repente oiste un sonido raro, de repente todo se volvio negro y cuando volviste en si, te viste que 1 Ammu, (si así se llama tu amiga) te habia aplastado " << endl;
	Sleep(9150);
	cout << "y 2 estabas en un cuarto desconocido en quien sabe donde, y lo PEOR POSEIDON EL DIOS DE TODOS LOS MARES Y SORRENTO te estaban viendo con cara de 'y este bicho raro de donde salio? y 'que rayos pasa aqui' " << endl << endl;
	Sleep(9150);
	cout << "En este momento tienes 2 opciones, La primera seria esperar a que Don Pose y Sorrento salgan del shock y ver haber que te dicen o tu preguntarles que si saben que sucedio, " << endl;
	Sleep(9150);
	cout << "pero con el conocido temperamento del devol que se cargan Don Pose y su mano derecha Sorrento no se si eso seria una buena idea" << endl;
	Sleep(9150);
	cout << "o la segunda, podrias correr for dear life y escapar por la puerta abierta que ves, mientras Don Pose y Sorrento siguen en shock, " << endl;
	Sleep(9150);
	cout << "pero eso significaria no tener ninguna clase de información sobre que sucedio y porque sucedio, pero weno en fin tu decisión" << endl << endl;
	Sleep(9150);
	cout << "Presiona 1: Para esperar a ver que les dicen Poseidon y Sorrento " << endl << endl;
	cout << "Presiona 2: Para escapar for dear life en lo que Poseidon y Sorrento estan en shock " << endl;
	cin >> tuDecision;
	cout << endl;
	string Opcion1_1 = "Poseidon y Sorrento salen del el Shock y al verte a ti y a tu amiga te aplican la ranteación tipo 'que haces aqui' 'como llegaste aquí', Sorrento dijo que a la mejor eras una Espia de Atena, y Don Pose casi hace aguachile contigo y con tu amiga, pero al final todos se calmaron y Poseidon te invito a su Sala para que hablen y para que tu y tu amiga le expliquen como llegaron ahi";
	string Opcion1_2 = "En el shock corres for dear life";
	string Opcion2_1 = "te quedas con Don Pose ";
	string Opcion2_2 = " te quedas con Isaack";

	string rama1_0 = "Le explicas a Don Pose lo sucedido, desde el portal raro con el ruido raro hasta tu aplastante llegada a su Templo Submarino, Don Pose se pone a analizar tu historia para ver si estas diciendo la verdad, despues de un rato parece que decide creerte y muy amablemente te ofrece la posibilidad de que tu y tu amiga se queden en su templo submarino, ";
	string rama1_0_1 = "Tu aceptas felizmente la invitación, pero tu Ammu parece haber aceptado más por no tener otra cosa mejor que hacer o a donde ir, Ammu se queda en el Pilar del Artico con Isaack de Kraken luego de Poseidon les diera a elegir donde querian vivir mientras estuvieran en su templo, por lo pronto, tu te quedaste en el Palacio de Poseidon por pedido del mismismo Don Pose ";
	string rama1_0_2 = "Despues de un tiempo de vivir en el Templo de Submarino de Poseidon y de haber interrogado con la venia de Don Pose (del que por cierto te hiciste muy amiga) tu y ammu no encontraron ninguna pista ni nada que les ayudara a saber que habia sucedido, porque lo que decidieron tomar un descanso y disfrutar de todas las amenidades que el templo submarino de Don Pose.  ";
	string rama1_0_3 = "Aunque despues de algunos meses de ocio y todavia sin noticias de pistas de lo que pudo haber sucedido, tu y ammu se empiezan a aburrir, planean decirle a Don Pose que muchas gracias por todo, y que iran a otro lado a investigar, cuando en eso llega carta de Atenea de la mano de Sorrento, invitando a Don Pose y a todas sus marinas a un Concilio de Paz, Don Pose decidí aceptar la rama de olivo que le tiende Atena. ";
	string rama1_0_4 = "Estas a punto de desearle buena suerte cuando te pregunta a ti y a Ammu que si quieren ir con el y sus marinas al Concilio o Prefieren quedarse en el Santuario, asegurandote a ti y a Ammu que no se quedarian solas, pues Hades y sus espectros más importantes llegarian de visita para cuidar el su Templo en su ausencia (o al menos eso esperaba el porque todavia no le preguntaba intuias tu) ";
	string rama2_0 = "Llegas al Santuario";

	string decision2 = "Entonces que haras? iras con Don Pose al Santuario de Atena para aprovechar y preguntarle al Caballero de Oro más cercano a Dios, si  el sabe que pez con tu vida y la de Ammu o si tiene alguna pista o te quedaras en Templo Submarino para aprovechar la visita de Hades, investigar con sus espectros y saludar al Señor del Inframundo? ";
	string escoge3 = "Presiona 3: Para acompañar a Don Pose al Concilio de Athena ";
	string escoge4 = "Presiona 4: Para quedarte en el Templo de Don Pose a hacer la Saludación a Hades y continuar la investigación con sus espectros ";

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
		cout << rama1_0_1 << endl;
		cout << rama1_0_2 << endl;
		cout << rama1_0_3 << endl;
		cout << rama1_0_4 << endl;

		cout << decision2 << endl << endl;
		cout << escoge3 << endl << endl;
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




