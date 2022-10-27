/*
Nombre del archivo: Arreglobidimensionales.cpp
Autor: Said Rivas
Lugar: ITV
Instrucciones: Ejemplos de arreglos bidimensionales
*/
#include<iostream>
#include<iomanip>

using namespace std;
int main (){
	
	//tipo_dato nombre_arreglo [dimension01][dimension02]
	int matrizA[2][2];
	cout << "Ingrese los datos: " << endl; 
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 2;j++){
			cout << "Elemento [" << i << "," << j << "]  = ";
			cin >> matrizA[i][j];
			
		}
	}
	cout << "Ingrese los datos: " << endl; 
	for(int i = 0; i < 2;i++){
		for(int j = 0; j < 2;j++){
			cout << setw (15); "Elemento [" << i << "," << j << "]  = " << matrizA[i][j];
			
			
		}
		cout << endl;
	}
	
	
	
	return 0;
}