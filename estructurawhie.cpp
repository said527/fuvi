/*
Nombre del archivo: estructuraswitch.cpp
Autor: Said Rivas
Lugar: ITV
Instrucciones: Ejemplo de la estructura repetitiva while
*/
#include<iostream>

using namespace std;

int main(){
	int edad;
	string nombre;
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << "Ingrese su edad: " ;
	cin >> edad;
	while(edad < 0){
		cout << "Ingrese su edad:" ;
       	cin >> edad;
	}
	cout << "Bienvenido " << nombre << endl;
	cout << "Fin de la aplicación";
	
	
	
	
	return 0;
	
	}