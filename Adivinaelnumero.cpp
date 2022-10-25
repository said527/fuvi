/*
Nombre del archivo: estructuraswitch.cpp
Autor: Said Rivas
Lugar: ITV
Instrucciones: Juego de adivinanza de un numero
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand (time(nullptr));
	int aleatorio = rand() % 10;
	int num, intento = 1;
	
	do{ 
	
	cout << "Adivina un numero entre 0 y 10 " << endl;
	cin >> num;
	if(num == aleatorio){
		cout << "Felicidades, acertaste " << endl;
		intento = 4;
		
	}else {
		cout << "numero incorrecto " << endl;
		if (intento == 3) {
			cout  << "Ud ha agotado todos sus intentos" << endl;
		}
		intento++;
	}

	}while (intento < 4);
	
	cout << "el numero ganador era: " << aleatorio << endl;
	
	return 0;     
}