#include <iostream>
#include <stdio.h>
#include <stdlib.h>  
#include "Tablero.cpp"
using namespace std;

class Batalla:public Tablero{
public:
	Batalla();
    bool Disparar(int, int);
	void MostrarBarcos();
	void MostrarDisparos();
	int NumerosBarcos();
	void menuJuego();

private:
	int TableroDisparos[10][10];
};

bool Batalla::Disparar(int x,int y){
    if(tablero[x][y] == 1){//supongo que el 1 va indicar si hay barco
        tablero[x][y] = 2;//cambio a 2 para indicar barco atacado
        return true;//atacaste un barco
    }
    return false;//fallaste
}

void Batalla::MostrarBarcos(){
	for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            cout << tablero[i][j] << " ";
        }
        cout << endl;      
	}
}

void Batalla::MostrarDisparos(){
	for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            cout << TableroDisparos[i][j] << " ";
        }
        cout << endl;      
	}
}

int Batalla::NumerosBarcos(){//aqui mostraria el numero de casillas que tienen barco, no supe como hacer que contara por solo barco
	int c = 0;
    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            if(tablero[i][j] == 1)
            c++;
        }
    }
    return c;
}

void Batalla::menuJuego(){
	int n;
	verTablero();
	cout<<"¡Preparate para la batalla!"<<endl;
	cout<<"1. Atacar" <<endl;
	cout<<"2. Rendirte"<<endl;
	cin>> n;
	
	switch(n){
	case 1:				
		Disparar()
		menuJuego();
		break;
	case 2:
		menuInicial();
		break;
}
