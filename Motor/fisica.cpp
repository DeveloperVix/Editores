#include <stdlib.h>
#include <iostream>

using namespace std;

class Fisica{
private:
	int masa;
	int volumen;
	int fueNormal;
	int coeFriccion;
	int rebote;
	bool fixRotacion;
	bool movil;
	int arrastre;
public:
	
	Fisica();
	
	void setDensidad(int,int);
	int getMasa();
	int getVolumen();

	void setFriccion(int, int);
	int getFueNormal();
	int getCoeFriccion();
	
	void setRebote(int);
	int getRebote();

	void setFixRotation(bool);
	bool getFixRotation();

	void setMovil(bool);
	bool getMovil();

	/*void setCollisionShape();
	usa enum
	*/
	
	void setArrastre(int);
	int getArrastre();
};

Fisica::Fisica(){
	masa = 0;
	volumen = 0;
	fueNormal = 0;
	coeFriccion = 0;
	rebote = 0;
	fixRotacion = false;
	movil = false;
	arrastre = 0;
}

void Fisica::setDensidad(int m, int V){
	masa = m;
	volumen = V;
}

int Fisica::getMasa(){
	return masa;
}

int Fisica::getVolumen(){
	return volumen;
}

void Fisica::setFriccion(int Fn, int f){
	fueNormal = Fn;
	coeFriccion = V;
}

int Fisica::getFueNormal(){
	return fueNormal;
}

int Fisica::getCoeFriccion(){
	return coeFriccion;
}

void Fisica::setRebote(int R){
	rebote = R;
}

int Fisica::getRebote(){
	return rebote;
}

void Fisica::setFixRotation(bool fixRot){
	fixRotacion = fixRot;
}

bool getFixRotation(){
	return fixRotacion;
}

void Fisica::setMovil(bool M){
	movil = M;
}

bool Fisica::getMovil(){
	return movil;
}

void Fisica::setArrastre(int arra){
	arrastre = arra;
}
	
int Fisica::getArrastre(){
	return arrastre;
}
