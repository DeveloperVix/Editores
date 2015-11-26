#include<iostream>
#include "Jugador.cpp"
#include <stdlib.h>
using namespace std;

//Para probar
class Batalla{
private:
public:
	int control;
	Batalla();
	Jugador player[2];
	void crearBarco();
};

Batalla::Batalla(){
	control=0;
	crearBarco();
}

void Batalla::crearBarco(){
	if(control<2){
		string nom, corr;
		player[control].setId(control);
		cout<<"Nombre del barco"<<endl;
		cin>>nom;
		player[control].setNombre(nom);
		control++;
	}
	else
		cout<<"arreglo lleno, BYE"<<endl;
}

int main () {
	Batalla bat;
	return 0;
}

