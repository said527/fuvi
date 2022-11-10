/*Calcular las calificaciones de un grupo de alumnos. La nota final de cada alumno se calcula según el siguiente criterio: la parte práctica vale el 10%;
	 la parte de problemas vale el 50% y la parte teórica el 40%. El algoritmo leerá el nombre del alumno, las tres notas, escribirá el resultado y volverá a
	 pedir los datos del siguiente alumno hasta que el nombre sea una cadena vacía. Las notas deben estar entre 0 y 10, si no lo están, no imprimirá las
	 notas, mostrará un mensaje de error y volverá a pedir otro alumno.
*/	 
	 

#include<iostream>
using namespace std;


int main() {
	string alumno;
	float notafinal;
	float notapractica;
	float notaproblemas;
	float notateoria;
	float nota_teoria;
	
	cout << "Introduce el nombre del alumno" << endl;
	cin >> alumno;
	while ((alumno!="")) {
		cout << "Introduce la nota practica" << endl;
		cin >> notapractica;
		cout << "Introduce la nota de problemas" << endl;
		cin >> notaproblemas;
		cout << "Introduce la nota de teoria" << endl;
		cin >> notateoria;
		if ((notapractica<=10 && notapractica>=0)) {
			if ((notaproblemas<=10 && notaproblemas>=0)) {
				if ((notateoria<=10 && notateoria>=0)) {
					cout << "La nota practica es " << notapractica << endl;
					cout << "La nota de problemas es " << notaproblemas << endl;
					cout << "La nota de teoria es " << notateoria << endl;
					
				
					notapractica = notapractica*0.1;
					notaproblemas = notaproblemas*0.5;
					nota_teoria = notateoria*0.4;
					notafinal = notapractica+notaproblemas+notateoria;} else {
					cout << "Has escrito una nota incorrecta, vuelve a intentarlo" << endl;
				}
			}
		}
		cout << "Introduce el nombre de otro alumno" << endl;
		cin >> alumno;
	}
	return 0;
}

