#include <iostream>
#include "jugador.cpp"
#include "movimiento.cpp"
#include "tablero.cpp"
using namespace std;

class menuBatalla{
public:
	
	Batalla actorBatalla[2];
	Tablero actorTablero[2];
	Jugador actorJugador[2];
	
	menuBatalla();
	void menuInicial();
	void jugadores();
	void posicionaBarcos();
	int contador;
	void menuJuego();
	void iniciarBatalla();
	
private:
	
};

void menuBatalla::jugadores(){
	if(contador < 2){
		actorJugador[contador].setNombre("Jugador ");
		actorJugador[contador].setScore(0);
		actorJugador[contador].setId(0);
		cout<<"¡Jugador "<<contador<< " listo!"
		contador++;
	}else{
		cout<<"Solo pueden jugar dos por partida"
	}
	
}

void menuBatalla::posicionaBarcos(int contador){
	actorTablero[contador].setBarcosPosicion();
	
}
void menuBatalla::menuInicial(){
	int n;
	cout<<"Bienvenido al juego Batalla naval"<<endl;
	cout<<"Menu"<<endl;
	cout<<"1. Crear jugadores"<<endl;
	cout<<"2. Poner barcos"<<endl;
	cout<<"3. Iniciar juego"<<endl;
	cout<<"4. Salir"<<endl;
	
	cin>> n;
	
	switch(n){
	case 1:
		jugadores();
		menuInicial();
		break;
	case 2:
		posicionaBarcos();
		menuInicial();
		break;
	case 3:
		menuJuego();
		break;
	}
	
	case 4:
		exit(0);
		break;
	
}

void menuBatalla::iniciarBatalla(int contador){
	actorBatalla[contador].main();
}


void menuBatalla::menuJuego(){
	int n;
	cout<<"¡Preparate para la batall!"<<endl;
	cout<<"1. Atacar" <<endl;
	cout<<"2. Rendirte"<<endl;
	cin>> n;
	
	switch(n){
	case 1:
		iniciarBatalla()
		menuJuego();
		break;
	case 2:
		menuInicial();
		break;
}




