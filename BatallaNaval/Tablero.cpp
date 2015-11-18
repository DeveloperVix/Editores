#include <stdlib.h>
#include <iostream>

using namespace std;

class Tablero{
public:
	
	void Mensajes(int);//Manda mensajes de lo que se ha hecho
	void setBarcosPosicion();//Colocar los barcos en el tablero en base a coordenadas introducidas por el jugador
	void VerificarMovimiento(int,int);//Introduce coordenadas y se verifica si se le dio a un barco
	void setScore(int);
	void getScore();
	
private:

	int tablero[10][10];//tablero
	int score;
	
};

void Tablero::Mensajes(int opcion){
	switch(opcion){
	case 1:
		cout<<"Has fallado!!"<<endl;
		break;	
	case 2:
		cout<<"Barco undido!!"<<endl;
		break;
	case 3:
		cout<<"Averiado!!"<<endl;
		break;
	case 4:
		cout<<"Has ganado :D"<<endl;
		break;
	case 5:
		cout<<"Has perdido DX"<<endl;
		break;
	case 6:
		cout<<"Barco colocado"<<endl;
		break;
		
	}
}

void Tablero::setBarcosPosicion(){
	int tamanioBarco = 0, Xi = 0, Yi = 0, Xf = 0, Yf = 0, auxP = 0;
	cout<<"Tamanio del barco: "<<endl;
	cin>>tamanioBarco;
	
	if(tamanio >= 2){
		
		cout<<"Coordenada inicial X:"<<endl;
		cin>>Xi;
		cout<<"Coordenada inicial Y:"<<endl;
		cin>>Yi;
		cout<<"Coordenada final X:"<<endl;
		cin>>Xf;
		cout<<"Coordenada final Y:"<<endl;
		cin>>Yf;
		
		//definir el for en que direccion (coordenadas), debera asignar el barco
		
		if(Xi == Xf){
			
			//se suma Y
			if(Yi < Yf){
				//for 
			}else Yi > Yf{
				auxP = Yf;
				Yf = Yi;
				Yi = auxP;
				//for
			}else{
				cout<<"Estan mal las coordenadas"
			}
			
		}else if(Yi == Yf){
			
			//se suma X
			if(Xi < Xf){
				//for 
			}else Xi > Xf{
				auxP = Xf;
				Xf = Xi;
				Xi = auxP;
				//for
			}else{
				cout<<"Estan mal las coordenadas"
			}
		}
		
	}else{

		cout<<"Coordenada X:"<<endl;
		cin>>Xi;
		cout<<"Coordenada Y:"<<endl;
		cin>>Yi;
		
		tablero[Xi][Yi] = tamanioBarco;
		Mensajes(6);
	}
	
	//tablero[fila][columna] = 
}
