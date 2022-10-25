/*
Nombre del archivo: semaforo.cpp
Autor: Natalia Sequeira 
Lugar: ITV
Instrucciones: Ejemplos con estructura condicional
*/

#include<iostream>

using namespace std;

int main(){
	int edad, color;
	cout <<"Ingrese su edad: ";
	cin >>edad;
	
	if(edad < 17){
		cout <<"Usted no tiene edad suficiente para conducir un vehiculo." << endl;
	} else{
		cout << "Color del semaforo:(r=Rojo, a=Amarillo, v=Verde)";
		cin >> color;
		
		if (color=='r'){
		cout << "Baje la velocidad hasta detenerse suavemente." << endl;
		} else if (color=='a'){
		cout << "Tenga precaucion. No puede avanzar." << endl;
		} else if (color=='v'){
		cout << "Puede seguir avanzando." << endl;
		} else{
		cout << "Color incorrecto." << endl;
		}
	}
	
	return 0;
}