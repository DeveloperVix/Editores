#include <iostream>
#include "fisica.cpp"
#include "movimiento.cpp"
#include "Motor_1.cpp"

using namespace std;

class MotorM{
public:
	Motor_1 atr();
	fisica fis();
	movimiento mov();
	MotorM();
	void menu();
	
private:
	
};

MotorM::MotorM(){
	menu();
}

void MotorM::menu(){
	int n;
	cout<<"Menu"<<endl;
	cout<<"1. Fisica"<<endl;
	cout<<"2. Movimiento"<<endl;
	cout<<"3. Atributos"<<endl;
	cin>> n;
	
	switch(n){
	case '1':
		fis();
		break;
		
	case '2':
		mov();
		break;
		
	case '3':
		atr();
		break;
		
	}
}

int main() {
	MotorM();
	return 0;
}
