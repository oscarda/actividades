#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int sacar_carta()
{
	int valor_carta;
	valor_carta=rand()%13+1;
	cout << "Su carta es " << valor_carta << "\n";
	return valor_carta;
}

int main()
{
	int puntos=0, nueva_carta;
	bool seguir_jugando=true;
	
	srand(time(NULL));
	
	cout << "Bienvenido a <Sacar 21>\n\n";
	
	do {
		puntos += sacar_carta();
		cout 
			<< "Tiene un total de " << puntos << " puntos\n"
			<< "¿Desea otra carta? (1: sí  2: no)\n";
		cin >> nueva_carta;
		if (puntos < 21) {
			if (nueva_carta == 1) 
				cout << "\nMuy bien, saquemos otra carta\n";
			else
			{
				cout 
					<< "\nDecide plantarse con " << puntos << " puntos.\n"
					<< "Se queda a " << 21-puntos << " puntos de llegar a 21.\n";
				seguir_jugando = false;
			}
		} 
		else if (puntos>21) 
		{
			cout << "Ohhh se ha pasado y ha perdido la partida.\n";
			seguir_jugando = false;
		}
		else 
		{
			cout 
				<< "¡¡Enhorabuena, ha llegado a 21 puntos!!\n"
				<< "Ha ganado la partida.\n";
			seguir_jugando=false;
		}
	} while(seguir_jugando);

	cout << "\n\nGracias por jugar con nosotros.\n";
}
	
	
