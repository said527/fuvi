/*
Nombre del archivo: estructuraswitch.cpp
Autor: Said Rivas
Lugar: ITV
Instrucciones: Otro ejemplo de la estructura de control condicional multiple switch 
*/
#include<iostream>

using namespace std;

int main(){
	char op;
	int op1;
	int op2;
	cout << "Menu de opciones: " << endl;
	cout << "a- Computadoras\nb- Smarphone\nc- Tablets\nd- salir " << endl;
	cout << "Seleccione una opción: ";
	cin >> op;
	
	switch(op){
		case 'A':
		case 'a':
			
			cout << "Usted a seleccionado computadoras" << endl;
			cout << "Que tipo de computadora desea comprar: " ;
			cout << "1- Dektop\n2- Laptop" << endl;
			cin >> op1;
			switch(op1){
				case 1 : 
				cout << "Usted a seleccionado Computadoras Desktop";
				cout << "Cuantas desea comprar: ";
				cin >> op2;
				
				
							}
			break;
		case 'B':
		case 'b':	
			cout << "Usted a seleccionado Smarphone" << endl;
				cout << "Que tipo de Smarphone desea comprar: " << endl;
			cout << "1- Gama baja\n2- Gama media\n3- Gama alta";
			cin >> op1;
			break;
		case 'C':
		case 'c':	
			cout << "Usted a seleccionado Tablets" << endl;
				cout << "Que tipo de tablets desea comprar: " << endl;
			cout << "1- Sin sim\n2- Con sim";
			cin >> op1;
			break;
		case 'D':
		case 'd':
			cout << "Usted ha salido correctamente de la aplicación" << endl;	
						
			break;
		default:
		cout << "La operación es incorrecta ";
	}
	
	return 0;
}