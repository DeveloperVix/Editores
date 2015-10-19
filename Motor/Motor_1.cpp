#include <stdlib.h>
#include <iostream>
#include "movimiento.cpp"

using namespace std;

class Atributos{
private:
	int contador;
	string nombre;
	int posicion[2];//posicion x,y
	int tamanio[2];//largo, ancho
	int rotacion;
	int color[4];//RGBA
	string etiqueta;
	bool precargaArte;
	
	Movimiento mov;

public:

	Atributos();

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
	
	void VerAtributos();

};



Atributos::Atributos(){
	contador = 1;
	nombre = "Actor 1";
	posicion[0] = posicion[1] = 0;
	tamanio[0] = tamanio[1] = 100;
	rotacion = 0;
	color[0] = color[1] = color[2] = color[3] = 1;
	etiqueta = "";
	precargaArte = true;
	
	VerAtributos();
}

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

void Atributos::VerAtributos(){
	//imprimir todos los atributos
	cout<<"Nombre:        "<< getNombre()<<endl;
	cout<<"Posicion:    X "<< getPosicionX()<<" Y "<< getPosicionY()<<endl;
	cout<<"Tamanio: Ancho "<<getTamanioAncho()<<" Largo "<< getTamanioLargo()<<endl;
	cout<<"Rotacion:      "<<getRotacion()<<endl;
	cout<<"Color:       R "<<getColorR()<<" G "<<getColorG()<<" B "<<getColorB()<<" A "<<getColorA()<<endl;
	cout<<"Etiqueta:      "<<getEtiqueta()<<endl;
	cout<<"Precarga Arte: "<<getPrecargaArte()<<endl;
	
	mov.VerAtributos();
}

int main(){
	Atributos actor;
	return 0;
}
