#include <iostream>
#include "jugador.cpp"
#include "tablero.cpp"	
using namespace std;

class menuBatalla{
public:
	
	Jugador actorJugador[3];
	
	menuInicial();		
	int contador;

private:
	
};

void menuBatalla::menuInicial(){
	int n;
	cout<<"Bienvenido al juego Batalla naval"<<endl;
	cout<<"Menu"<<endl;
	cout<<"1. Jugar contra la CPU"<<endl;
	cout<<"2. Jugador VS Jugador (Proximanente)"<<endl;
	cout<<"3. Salir"<<endl;
	
	cin>> n;
	
	switch(n){
	case 1:
		jugadores();
		menuInicial();
		break;
	case 2:
		menuInicial();
		break;
	
	case 3:
		exit(0);
		break;
	
}

int main() {
	menuBatalla menu;
	return 0;
}

