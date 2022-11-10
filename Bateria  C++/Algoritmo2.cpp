/* Algoritmo  que lean 2 números distintos y nos indique cuál es el mayor o si son iguales.
*/

#include<iostream>
using namespace std;



int main() {
	float dos;
	float primero;
	
	cout << "Ingrese el primer número: ";
	cin >> primero;
	cout << "Ingrese el segundo número: ";
	cin >> dos;
	if ((primero==dos)) {
		cout << "Ambos números son iguales" << endl;
	} else {
		if ((primero>dos)) {
			cout << "El número mayor es: " << primero << endl;
		} else {
			if ((primero<dos)) {
				cout << "El número mayor es: " << dos << endl;
			}
		}
	}
	cout << "Fin del algoritmo :)" << endl;
	return 0;
}

