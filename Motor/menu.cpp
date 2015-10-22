#include <iostream>
//#include "fisica.cpp"
#include "movimiento.cpp"
#include "Motor_1.cpp"
#include <stdlib.h>

using namespace std;

class MotorM{
public:
	Atributos actorAtri[11];
	Movimiento actorMov[11];
	MotorM();
	
	void menu();
	int contador;
	void CrearActor();
	void VerAtributos(int);
	void NumActores();
	
private:
	
};

MotorM::MotorM(){
	contador = 1;
	menu();
}

void MotorM::CrearActor(){
	if(contador < 11){

		actorAtri[contador].setNombre("Actor ");
		actorAtri[contador].setPosicion(0, 0);
		actorAtri[contador].setTamanio(100, 100);
		actorAtri[contador].setRotacion(0);
		actorAtri[contador].setColor(1,1,1,1);
		actorAtri[contador].setEtiqueta("");
		actorAtri[contador].setPrecargaArte(true);
		
		actorMov[contador].setVelLineal(0,0);
		actorMov[contador].setVelAngular(0);
		actorMov[contador].setVelMaxima(0);
		actorMov[contador].setAplicaMaxVel(0);
	
		//poner los sets de las otras clases
		
		contador++;
		cout<<"\nActor Creado!!\n"<<endl;
	}else{
		cout<<"Ya hay muchos actores :P"<<endl;
	}
}

void MotorM::VerAtributos(int contador){
	
	cout<<"Nombre:        "<< actorAtri[contador].getNombre()<<contador<<endl;
	cout<<"Posicion:    X "<< actorAtri[contador].getPosicionX()<<" Y "<< actorAtri[contador].getPosicionY()<<endl;
	cout<<"Tamanio: Ancho "<< actorAtri[contador].getTamanioAncho()<<" Largo "<< actorAtri[contador].getTamanioLargo()<<endl;
	cout<<"Rotacion:      "<< actorAtri[contador].getRotacion()<< endl;
	cout<<"Color:       R "<< actorAtri[contador].getColorR()<<" G "<< actorAtri[contador].getColorG()<<" B "<< actorAtri[contador].getColorB()<<" A "<< actorAtri[contador].getColorA()<<endl;
	cout<<"Etiqueta:      "<< actorAtri[contador].getEtiqueta()<<endl;
	cout<<"Precarga Arte: "<< actorAtri[contador].getPrecargaArte()<<endl;
	
	cout<<endl<<"------- Movimiento -------\n"<<endl;
	cout<<"Velocidad Lineal:  X"<< actorMov[contador].getVelLinealX()<<" Y "<<actorMov[contador].getVelLinealY()<<endl;
	cout<<"Velocidad Angular: "<< actorMov[contador].getVelAngular()<<endl;
	cout<<"Velocidad Maxima: "<< actorMov[contador].getVelMaxima()<<endl;
	cout<<"Aplicar velocidad maxima: "<< actorMov[contador].getAplicaMaxVel()<<endl<<endl;
	
	//imprimir los demas atributos
}

void MotorM::NumActores(){
	int i;
	for(i=1; i < contador; i++){
		cout<<actorAtri[i].getNombre()<<" "<<i<<endl;
	}
	i--;
	cout<<endl<<"Hay "<< i <<" actor(es)"<<endl;
}


void MotorM::menu(){
	int n;
	cout<<"\nBienvenido al primer motor hecho a pata xD 1.2"<<endl;
	cout<<"Menu"<<endl;
	cout<<"1. Ver numero de Actores"<<endl;
	cout<<"2. Ver Actor"<<endl;
	cout<<"3. Crear nuevo Actor"<<endl;
	cout<<"4. Salir"<<endl;
	cin>> n;
	
	switch(n){
	case 1:
		NumActores();
		menu();
		break;
		
	case 2:
		int act;
		cout<<"\nDe cual actor quiere ver sus atributos: "<<endl;
		NumActores();
		cout<<endl<<"Introduzca el numero de actor:"<<endl;
		cin>>act;
		VerAtributos(act);
		
		menu();
		break;
		
	case 3:
		CrearActor();
		menu();
		break;
	case 4:
		exit(0);
		break;
		
	}
}

int main() {
	MotorM motor;
	return 0;
}
