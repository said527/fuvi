/*	 Algoritmo que lea un número entero (lado) y a partir de él, cree un cuadrado
	 de asteriscos con ese tamaño.
	 Ejemplo, para lado = 4 escribiría:
	 ****
	 ****
	 ****
	 ****
*/	
#include<iostream>
using namespace std;



int main() {
	int i;
	int n;
	int x;

	cout << "Ingrese un número: " << endl;
	cin >> n;
	for (x=1;x<=n;x++) {
		for (i=1;i<=n;i++) {
			if ((x<n && i<n)) {
				cout << "*  ";
			} else {
				cout << "*  ";
			}
		}
		cout << "" << endl;
	}
	return 0;
}

