#include <iostream>
#include "jugador.cpp"

#include "movimiento.cpp"//Este encabezado no va
#include "tablero.cpp"	//por que en jugador.cpp hereda tanto la clase movimiento como tablero
using namespace std;

class menuBatalla{
public:
	
	Batalla actorBatalla[2];//No va por que jugador puede acceder a los metodos
	Tablero actorTablero[2];//No va por que jugador puede acceder a los metodos
	
	Jugador actorJugador[2];//Serian 3 jugadores ya que faltaria el juego contra la CPU 
	
	menuBatalla();//no se esta utilizando, pero aqui se podria llamar el metodo menuInicial			
	void jugadores();	//Este metodo no iria
	void iniciarBatalla(); //Este metodo no iria
	
	void posicionaBarcos();	//Este metodo iria en movimiento.cpp
	void menuJuego();//Este metodo iria en movimiento.cpp
	
	int contador;
	void menuInicial();
	
	
	
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
void menuBatalla::menuInicial(){//hay que hacer cambios en las opciones, 1. Jugar contra la CPU, 2. Jugador VS Jugador (SOLO ABRIA QUE PONER UN AVISO DE QUE NO SE PUEDE POR QUE NO ESTA LISTA xD), 3. Salir
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

//Esto iria en movimiento.cpp
void menuBatalla::menuJuego(){//Solo faltaria la parte de ver el tablero, no como una opcion, si no que salga antes del menu siempre
	int n;
	cout<<"¡Preparate para la batalla!"<<endl;
	cout<<"1. Atacar" <<endl;
	cout<<"2. Rendirte"<<endl;
	cin>> n;
	
	switch(n){
	case 1:				//En esta parte es donde hay que acceder a la clase de movimientos, lo cual hace el jugador pues hereda de movimiento
		iniciarBatalla()
		menuJuego();
		break;
	case 2:
		menuInicial();
		break;
}


//faltaria el main, ya que esta clase es la principal



