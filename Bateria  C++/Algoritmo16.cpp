/*Algoritmo que lea números enteros hasta teclear 0, y nos muestre el máximo, el mínimo y la media de todos ellos.
*/
#include<iostream>
using namespace std;



int main() {
	float contador;
	float max;
	float media;
	float min;
	float num;
	float suma;
	 
	cout << "Ingrese un numero: " << endl;
	cin >> num;
	min = num;
	max = num;
	suma = 0;
	while ((num!=0)) {
		if ((num==max)) {
			max = num;
		}
		if ((num<min)) {
			min = num;
		}
		suma = suma+num;
		contador = contador+1;
		cin >> num;
	}
	media = suma/(contador);
	cout << "El maximo es " << max << endl;
	cout << "El minimo es " << min << endl;
	cout << "La media es " << media << endl;
	return 0;
}

