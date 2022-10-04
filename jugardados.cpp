/*
Nombre del archivo: pitagoras.cpp
Autor: Said rivas
Lugar: ITV
Instrucciones: Ejemplo sobre la biblioteca cmath
*/
#include<iostream>
using namespace std;
int main(){

	
	int valorMin = 1, valorMax = 6;
	//formula para generar numeros dentro de un rango
	short dado1 = (rand() %  (valorMax - valorMin + 1)) + valorMin;
	short dado2 = (rand() %  (valorMax - valorMin + 1)) + valorMin;
	cout << dado1 << " , " <<dado2;
	
	return 0;
}