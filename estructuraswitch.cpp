/*
Nombre del archivo: estructuraswitch.cpp
Autor: Said Rivas
Lugar: ITV
Instrucciones: Ejemplo de la estructura de control condicional multiple switch 
*/
#include<iostream>

using namespace std;

int main(){
	int op;
	cout << "Menu de opciones: " << endl;
	cout << "1- Computadoras\n2- Smarphone\n3- Tablets\n4- salir " << endl;
	cout << "Seleccione una opción: ";
	cin >> op;
	
	switch(op){
		case 1:
			cout << "Usted a seleccionado computadoras" << endl;
			break;
		case 2:
			cout << "Usted a seleccionado Smarphone" << endl;
			break;
		case 3:
			cout << "Usted a seleccionado Tablets" << endl;
			break;
		case 4:
			cout << "Usted ha salido correctamente de la aplicación" << endl;				
			break;
		default:
		cout << "La operación es incorrecta ";
	}
	
	
	
	return 0;
}