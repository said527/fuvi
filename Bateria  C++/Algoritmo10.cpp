/*Algoritmo que nos diga si una persona puede acceder a cursar un ciclo formativo de grado superior o no, para acceder a un grado superior, si se tiene un titulo de bachiller, en caso de no tener, se puede acceder si 
 hemos superado la prueba de acceso(admisión)
 */

#include<iostream>
using namespace std;



int main() {
	string admi;
	string admin;
	string bachi;
	
	cout << "***Para tener un titulo de grado superior debera tener un diploma de bachiller*** " << endl;
	cout << "¿Tiene usted un diploma de bachiller?" << endl;
	cin >> bachi;
	if ((bachi=="si")) {
		cout << "Felicidades usted puede cursar un ciclo de grado superior :) " << endl;
	} else {
		cout << "Aunque no tenga diploma de bachiller, puede acceder si usted supero la prueba de admisión " << endl;
		cout << "¿Usted supero la prueba de admisión? " << endl;
		cin >> admin;
		if ((admin=="si")) {
			cout << "Usted puede cursar un ciclo de grado superior :) " << endl;
		} else {
			cout << "Lo sentimos mucho, no cumple con ninguno de los requisitos para entrar :( " << endl;
		}
	}
	cout << "Fin del algortimo " << endl;
	return 0;
}

//el error de este es que en un admin, no le puse la n 