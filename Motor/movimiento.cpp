#include <stdlib.h>
#include <iostream>

using namespace std;

class Movimiento{
private:
	int velocidadLineal [2];//velocidad x,y
	int velocidadAngular;
	int velocidadMaxima;
	bool aplicaMaxVelocidad;

public:
	
	void setVelLineal(int,int);
	int getVelLinealX();
	int getVelLinealY();
	
	void setVelAngular(int);
	int getVelAngular();
	
	void setVelMaxima(int);
	int getVelMaxima();
	
	void setAplicaMaxVel(bool);
	bool getAplicaMaxVel();
	
	
};


void Movimiento::setVelLineal(int X, int Y){
	velocidadLineal[0] = X;
	velocidadLineal[1] = Y;
}

int Movimiento::getVelLinealX(){
	return velocidadLineal[0];
}

int Movimiento::getVelLinealY(){
	return velocidadLineal[1];
}

void Movimiento::setVelAngular(int velA){
	velocidadAngular = velA;
}

int Movimiento::getVelAngular(){
	return velocidadAngular;
}

void Movimiento::setVelMaxima(int velM){
	velocidadMaxima = velM;
}

int Movimiento::getVelMaxima(){
	return velocidadMaxima;
}

void Movimiento::setAplicaMaxVel(bool aplMaxVel){
	aplicaMaxVelocidad = aplMaxVel;
}

bool Movimiento::getAplicaMaxVel(){
	return aplicaMaxVelocidad;
}

/*
int main(){
	return 0;
}
*/
