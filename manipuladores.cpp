/*
nombre del archivo: manipuladores. cpp
Autor: Andres Flores
Lugar: ITV
Instrucciones: Ejemplos de manipulación de E/S
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	
	cout << left;
	cout << setw(20) << "Artista" << setw(10) << "Album" << endl
	      << setw(20) << "Michal Jackon" << setw(10) << "Thriller" << endl;
	     
	     cout << fixed << setprecision(0) <<12.34467;
	     cout << "********************************" << endl;
	     
	     cout << left;
	     cout << setw(10) "Asignatura" << "Estudiantes" << endl
	          << setw(20) "Programación" << 12 << endl
	          << left << setw(20) << "Redes" << 9;
	     return 0;
	
}