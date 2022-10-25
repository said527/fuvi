/*
Nombre del archivo: estructuraswitch.cpp
Autor: Said Rivas
Lugar: ITV
Instrucciones: Ejemplo de la estructura for
*/
#include<iostream>

using namespace std;

int main(){
	int tabla;
	cout << "Cual tabla de multiplicar desea mostrar: ";
	cin >> tabla;
	for(int i = 1;i < 11;i++){
		cout << tabla << " x " << i << " = " << tabla*i << endl;
	}
	return 0;
}
