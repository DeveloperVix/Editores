#include <stdlib.h>
#include <iostream>

using namespace std;

class Graficos{
private:
	int visible; // 0=false 1=true
	int offsetX; //anchor x ???
	int offsetY; //anchor y ???
	int flipHorizontal; // 0=false 1=true
	int flipVertical; // 0=false 1=true
	int wrap; //0=stretch 1=fixed 2..etc
	int tileAncho;
	int tileAlto;
	//Graficos graphs;
public:
	Graficos();
	void setVisible(int);
	int getVisible();

	void setOffsetX(int);
	int getOffsetX();

	void setOffsetY(int);
	int getOffsetY();

	void setFlipHorizontal(int);
	int getFlipHorizontal();

	void setFlipVertical(int);
	int getFlipVertical();

	void verAtributos();
};

Graficos::Graficos(){
	int visible=1; // 0=false 1=true
	int offsetX=0; //anchor x ???
	int offsetY=0; //anchor y ???
	int flipHorizontal=0; // 0=false 1=true
	int flipVertical=0; // 0=false 1=true
	int wrap=0; //0=stretch 1=fixed 2..etc
	int tileAncho=32;
	int tileAlto=32;
	verAtributos();
}

void Graficos::setVisible(int vis){
	printf("Es visible? (1=true, 0=false) \n");
	scanf("%d", &vis);
	visible=vis;
}

int Graficos::getVisible(){
	return visible;
}

void Graficos::setOffsetX(int offX){
	printf("Offset X: \n");
	scanf("%d", &offX);
	offsetX=offX;
}

int Graficos::getOffsetX(){
	return offsetX;
}

void Graficos::setOffsetY(int offY){
	printf("Offset Y: \n");
	scanf("%d", &offY);
	offsetY=offY;
}

int Graficos::getOffsetY(){
	return offsetY;
}


void setFlipHorizontal(int invH){
	printf("Invertido Horizontalmente? (1=true, 0=false) \n");
	scanf("%d", &invH);
	flipHorizontal=invH;
}

int getFlipHorizontal(){
	return flipHorizontal;
}

void setFlipVertical(int invV){
	printf("Invertido Verticalmente? (1=true, 0=false) \n");
	scanf("%d", &invV);
	flipVertical=invV;
}

int getFlipVertical(){
	return flipVertical;
}


/*void Graficos::verAtributos(){
	if(getVisible==0){
	printf("Visible: Falso");
	}else{
	printf("Visible: Verdadero");
	}

	graphs.verAtributos();
}*/
