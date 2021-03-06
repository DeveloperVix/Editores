#include <stdlib.h>
#include <iostream>

using namespace std;

class Atributos{
private:
	string nombre;
	int posicion[2];//posicion x,y
	int tamanio[2];//largo, ancho
	int rotacion;
	int color[4];//RGBA
	string etiqueta;
	bool precargaArte;
	

public:
	
	void setNombre(string);
	string getNombre();
	
	void setPosicion(int,int);
	int getPosicionX();
	int getPosicionY();
	
	void setTamanio(int,int);
	int getTamanioLargo();
	int getTamanioAncho();
	
	void setRotacion(int);
	int getRotacion();
	
	void setColor(int,int,int,int);
	int getColorR();
	int getColorG();
	int getColorB();
	int getColorA();
	
	void setEtiqueta(string);
	string getEtiqueta();
	
	void setPrecargaArte(bool);
	bool getPrecargaArte();

};


void Atributos::setNombre(string nom){
	nombre = nom;
}

string Atributos::getNombre(){
	return nombre;
}

void Atributos::setPosicion(int X, int Y){
	posicion[0] = X;
	posicion[1] = Y;
}

int Atributos::getPosicionX(){
	return posicion[0];
}

int Atributos::getPosicionY(){
	return posicion[1];
}

void Atributos::setTamanio(int W, int H){
	tamanio[0] = W;
	tamanio[1] = H;
}

int Atributos::getTamanioAncho(){
	return tamanio[0];
}

int Atributos::getTamanioLargo(){
	return tamanio[1];
}

void Atributos::setRotacion(int R){
	rotacion = R;
}

int Atributos::getRotacion(){
	return rotacion;
}

void Atributos::setColor(int R, int G, int B, int A){
	color[0] = R;
	color[1] = G;
	color[2] = B;
	color[3] = A;
}

int Atributos::getColorR(){
	return color[0];
}

int Atributos::getColorG(){
	return color[1];
}

int Atributos::getColorB(){
	return color[2];
}

int Atributos::getColorA(){
	return color[3];
}

void Atributos::setEtiqueta(string E){
	etiqueta = E;
}

string Atributos::getEtiqueta(){
	return etiqueta;
}

void Atributos::setPrecargaArte(bool PA){
	precargaArte = PA;
}

bool Atributos::getPrecargaArte(){
	return precargaArte;
}


/*
int main(){
	return 0;
}*/
