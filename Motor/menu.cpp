#include <iostream>
//#include "fisica.cpp"
#include "movimiento.cpp"
#include "graficos.cpp"
#include "Motor_1.cpp"
#include <stdlib.h>

using namespace std;

class MotorM{
public:
	Atributos actorAtri[11];
	Movimiento actorMov[11];
	Graficos actorGra[11];
	//Hay que crear los demas arreglos de fisica
	MotorM();
	
	void menu();
	int contador;
	void CrearActor();
	void VerAtributos(int);
	void NumActores();
	void ModificarAtributos(int);
	
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
		
		actorGra[contador].setVisible(1);
		actorGra[contador].setOffsetX(5);
		actorGra[contador].setOffsetY(5);
		actorGra[contador].setFlipHorizontal(0);
		actorGra[contador].setFlipVertical(0);
	
		//poner los sets de las otras clases, fisica
		
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
	
	cout<<endl<<"------- Graficos -------\n"<<endl;
	cout<<"Visible:  "<< actorGra[contador].getVisible()<<" (0=false 1=true) "<<endl;
	cout<<"Offset: X"<< actorGra[contador].getOffsetX()<<" Y"<<actorGra[contador].getOffsetY()<<endl;
	cout<<"Flip: Horizontal "<< actorGra[contador].getFlipHorizontal()<<" Vertical "<<actorGra[contador].getFlipVertical()<<endl;

	
	//imprimir los demas atributos utilizando los get, fisica y graficos
}

void MotorM::ModificarAtributos(int contador){
	int opAtr = 0, opGral = 0, posNX = 0, posNY = 0, anchoN = 0, largoN = 0, rotN = 0, RN = 0, GN = 0, BN = 0, AN = 0, precargaN = 0;
	string nomN, etiN;
	
	cout<<"\nQue atributos quiere modificar: "<<endl;
	cout<<"1. Generales \n2. Movimiento \n3. Graficos \n4. Salir"<<endl;
	cin>>opAtr;
	
	switch(opAtr){
	case 1:
		
		
		cout<<"\nNombre:        "<< actorAtri[contador].getNombre()<<contador<<endl;
		cout<<"Posicion:    X "<< actorAtri[contador].getPosicionX()<<" Y "<< actorAtri[contador].getPosicionY()<<endl;
		cout<<"Tamanio: Ancho "<< actorAtri[contador].getTamanioAncho()<<" Largo "<< actorAtri[contador].getTamanioLargo()<<endl;
		cout<<"Rotacion:      "<< actorAtri[contador].getRotacion()<< endl;
		cout<<"Color:       R "<< actorAtri[contador].getColorR()<<" G "<< actorAtri[contador].getColorG()<<" B "<< actorAtri[contador].getColorB()<<" A "<< actorAtri[contador].getColorA()<<endl;
		cout<<"Etiqueta:      "<< actorAtri[contador].getEtiqueta()<<endl;
		cout<<"Precarga Arte: "<< actorAtri[contador].getPrecargaArte()<<endl;
		
		cout<<"\nEliga cual atributo a modificar\n1. Nombre \n2. Posicion \n3. Tamanio \n4. Rotacion \n5. Color\n6. Etiqueta\n7. Precarga Arte \n8. Regresar"<<endl;
		cin>> opGral;
		
		if(opGral == 1){
			cout<<"\nInserte el nuevo nombre:\n"<<endl;
			cin>>nomN;
			actorAtri[contador].setNombre(nomN);
			
		}else if(opGral == 2){
			
			cout<<"\nInserte la posicion X :\n"<<endl;
			cin>>posNX;
			cout<<"\nInserte la posicion Y :\n"<<endl;
			cin>>posNY;
			actorAtri[contador].setPosicion(posNX, posNY);
			
		}else if(opGral == 3){
			
			cout<<"\nInserte el ancho:\n"<<endl;
			cin>>anchoN;
			cout<<"\nInserte el largo:\n"<<endl;
			cin>>largoN;
			actorAtri[contador].setTamanio(anchoN, largoN);
		
		}else if(opGral == 4){
			
			cout<<"\nInserte la rotacion:\n"<<endl;
			cin>>rotN;
			actorAtri[contador].setRotacion(rotN);
			
		}else if(opGral == 5){
			
			cout<<"\nInserte valor para R:\n"<<endl;
			cin>>RN;
			cout<<"\nInserte valor para G:\n"<<endl;
			cin>>GN;
			cout<<"\nInserte valor para B:\n"<<endl;
			cin>>BN;
			cout<<"\nInserte valor para A:\n"<<endl;
			cin>>AN;
			actorAtri[contador].setColor(RN, GN, BN, AN);
			
		}else if(opGral == 6){
		
			cout<<"\nInserte la nueva etiqueta:\n"<<endl;
			cin>>etiN;
			actorAtri[contador].setEtiqueta(etiN);
			
		}else if(opGral == 7){
			
			cout<<"\nEscriba 0 para false o 1 para true, precargar el arte:\n"<<endl;
			cin>>precargaN;
			if(precargaN == 0){
				actorAtri[contador].setPrecargaArte(false);
			}else if(precargaN == 1){
				actorAtri[contador].setPrecargaArte(true);
			}
			
		}
		
		ModificarAtributos(contador);
		break;
		
	case 2:
		
		break;
		
	case 3:
		
		break;
		
	case 4:
		cout<<"Modificado!!"<<endl;
		menu();
		break;
	}
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
	cout<<"4. Modificar atributos"<<endl;
	cout<<"5. Salir"<<endl;
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
		cout<<endl<<"Introduzca el numero de actor: "<<endl;
		cin>>act;
		VerAtributos(act);
		
		menu();
		break;
		
	case 3:
		CrearActor();
		menu();
		break;
	case 4:
		int ac;
		cout<<"\n De cual actor quiere modificar sus atributos: "<<endl;
		NumActores();
		cout<<endl<<"Introduzca el numero de actor: "<<endl;
		cin>>ac;
		ModificarAtributos(ac);
		break;
	case 5:
		exit(0);
		break;
		
	}
}

int main() {
	MotorM motor;
	return 0;
}
