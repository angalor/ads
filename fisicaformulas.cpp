#include <iostream>
#include <math.h>
#define gravedad 9.8
using namespace std;

void caida_altura(){
	system("CLS");
	float altura = 0;
	int tiempo = 0;
	cout<<"   Caida libre"<<endl;
	cout<<"Calcular altura"<<endl;
	cout<<"Ingrese el tiempo: ";
	cin>>tiempo;
	altura = (gravedad * pow(tiempo,2))/2;
	cout<<"La altura es "<<altura<<endl;
}

void velocidad_final(){
	
}

int main(){
	int x = 3, a, c = 0;
	while(x != 2){
		
		system("CLS");
		cout<<"	 Menu"<<endl;
		cout<<"1.-Calcular"<<endl;
		cout<<"2.-Salir"<<endl;
		cin>>x;
		if(x == 1){
			system("CLS");
			cout<<"Elija el tipo de operacion"<<endl;
			cout<<"1.-Caida libre"<<endl;
			cout<<"2.-Lanzamiento vertical"<<endl;
			cin>>c;
		}
		if(c == 1){
			system("CLS");
			int b;
			cout<<"Elija la opcion"<<endl;
			cout<<"1.-Calcular altura"<<endl;
			cout<<"2.-Calcular velocidad final"<<endl;
			cout<<"3.-Calcular tiempo"<<endl;
			cin>>b;
	 		if(b == 1){
				caida_altura();
				system("pause");
			}
			if (b == 2){
				velocidad_final();
				system("pause");
			}
		}
	}
	if(x == 2){
		system("CLS");
		cout<<"Estas seguro de que quieres salir?"<<endl;
		cout<<"1.-Si"<<endl;
		cout<<"2.-No"<<endl;
		cin>>a;
		if(a == 2){
			system("CLS");
			main();
		}
	}
	cout<<"Gracias por su atencion"<<endl;
	system("pause");
	return 0;
}
