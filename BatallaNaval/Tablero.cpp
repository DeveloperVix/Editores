#include <stdlib.h>
#include <iostream>

using namespace std;

class Tablero{
public:
	
	Tablero();
	void Mensajes(int);//Manda mensajes de lo que se ha hecho
	void setBarcosPosicion();//Colocar los barcos en el tablero en base a coordenadas introducidas por el jugador
	void VerificarMovimiento(int,int);//Introduce coordenadas y se verifica si se le dio a un barco
	void VerTablero();//funcion para ver el tablero, opcional
	void setScore(int);
	int getScore();
	
private:

	int tablero[10][10];//tablero
	int score;
	
};

Tablero::Tablero(){
	score = 0;
	int i,j;
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			tablero[i][j] = 0;
		}
	}
}

void Tablero::VerTablero(){
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			cout<<tablero[i][j]<<"";
		}
		cout<<"\n";
	}
}

void Tablero::setScore(int nScore){
	score = nScore;
}

int Tablero::getScore(){
	return score;
}

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
	case 7:
		cout<<"Estan mal las coordenadas"<<endl;
		break;
		
	}
}

void Tablero::setBarcosPosicion(){
	int tamanioBarco = 0, Xi = 0, Yi = 0, Xf = 0, Yf = 0, auxP = 0, i,j;
	cout<<"Tamanio del barco: "<<endl;
	cin>>tamanioBarco;
	
	if(tamanioBarco >= 2){
		
		cout<<"Coordenada inicial X:"<<endl;
		cin>>Xi;
		cout<<"Coordenada inicial Y:"<<endl;
		cin>>Yi;
		cout<<"Coordenada final X:"<<endl;
		cin>>Xf;
		cout<<"Coordenada final Y:"<<endl;
		cin>>Yf;

		
		if(Xi == Xf){
			
			//se suma Y
			if(Yi < Yf){
				
				Xi--;
				for(i = --Yi; i < Yf; i++){
					tablero[Xi][i] = tamanioBarco;
				}
				Mensajes(6);
				
			}else if (Yi > Yf){
				
				auxP = Yf;
				Yf = Yi;
				Yi = auxP;
				Xi--;
				for(i = --Yi; i < Yf; i++){
					tablero[Xi][i] = tamanioBarco;
				}
				Mensajes(6);
				
			}else{
				
				Mensajes(7);
				
			}
			
		}else if(Yi == Yf){
			
			//se suma X
			if(Xi < Xf){
				
				Yi--;
				for(i = --Xi; i < Xf; i++){
					tablero[i][Yi] = tamanioBarco;
				}
				Mensajes(6);
				
			}else if (Xi > Xf){
				
				auxP = Xf;
				Xf = Xi;
				Xi = auxP;
				Yi--;
				for(i = --Xi; i < Xf; i++){
					tablero[i][Yi] = tamanioBarco;
				}
				Mensajes(6);
				
			}else{
				Mensajes(7);
			}
			
		}else{
			
			Mensajes(7);
			
		}
		
	}else{
		//Barco de una casilla
		cout<<"Coordenada X:"<<endl;
		cin>>Xi;
		cout<<"Coordenada Y:"<<endl;
		cin>>Yi;
		
		tablero[Xi][Yi] = tamanioBarco;
		Mensajes(6);
	}
	
	VerTablero();
	
}

void Tablero::VerificarMovimiento(int x, int y){
	
}
//Main temporal
int main(){
	Tablero tab;
	tab.setBarcosPosicion();
	return 0;
}
