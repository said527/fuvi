/*Dada una secuencia de números leídos por teclado, que acabe con un -1 por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,??,-1; Realizar el algoritmo que calcule
la media aritmética. Suponemos que el usuario no insertará número negativos.
*/
#include<iostream>
using namespace std;



int main() {
	float media;
	float num;
	float resultado;
	 
	cout << "Para finalizar el algortimo solo ingrese un menos uno" << endl;
	media = 0;
	resultado = 0;
	while ((num>-1)) {
		cout << "Ingrese un número: " << endl;
		cin >> num;
		if ((num!=-1)) {
			resultado = resultado+num;
			media = resultado/num;
		}
	}
	cout << "La media aritmetica de los numeros es: " << media << endl;
	return 0;
}

