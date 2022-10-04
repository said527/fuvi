/*
Nombre del archivo: .cpp
Autor: Said rivas
Lugar: ITV
Instrucciones: Ejemplo sobre la biblioteca cmath
*/
#include<iostream>
#include<cstdlib> //C Standart Library
#include<ctime>

using namespace std;

int main(){
	//long tiempoTranscurrido = time(nullptr); // 1 Enero 1970
	srand(time(nullptr)); //send ramdom, semilla de inicio
	int aleatorio = rand() % 10; 
	int num;
	cout << "Adivine un numero entre 0 y 10 ";
	cin >> num;
	if(num ==aleatorio){
		cout << "Felicidades acertaste";
		
	}else{
		cout << "No acertaste";
	}
	
	return 0; 
}