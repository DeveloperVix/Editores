#include <stdlib.h>
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

//clase jugador (Nombre, Score, #Barco)
class Jugador{
private:
	string nombre;
	int score;
	int idBarco;

public:
	Jugador();
	void setNombre(string);
	string getNombre();
	void setScore(int);
	int getScore();
	void setId(int);
	int getId();
};

Jugador::Jugador(){
	string nombre="";
	int score=0;
	int idBarco=0;
}

void Jugador::setNombre(string nom){
	//string str="";
	//printf("Nombre del barco: \n");
	//scanf("%s", &str);
	nombre=nom;
}

string Jugador::getNombre(){
	return nombre;
}

void Jugador::setId(int idd){
	idBarco=idd;
}

int Jugador::getId(){
	return idBarco;
}

void Jugador::setScore(int sco){
	score=sco;
}

int Jugador::getScore(){
	return score;
}
