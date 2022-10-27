/*
Nombre del archivo:  Arreglos.cpp




*/
#include<iostream>
using namespace std;
int main(){
	int cant;
	//tipo de dato nombre_arreglo [tamaño/dimensión]
	cout << "Ingresle la cantidad de datos";
	cin >> cant;
	double promediosNotas[cant];
  //  promediosNotas[0] = 15.2;
   // promediosNotas[1] = 55.8;
    
    for(int i = 0; i < cant;i++){
    	cout << "Elemento [" << i << "] = " ;
    	cin >> promediosNotas [1];
	} 
     for(int i = 0; i < cant;i++){
    	cout << "Elemento [" << i << "] = "  << promediosNotas[i] << endl;
    	cin >> promediosNotas [1];
	}
    cout << promediosNotas[0] << endl;
    cout << promediosNotas[1] << endl;
    
		
	
	
	
	
	return 0; 
}