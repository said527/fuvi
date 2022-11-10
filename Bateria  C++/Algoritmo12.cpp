/* Se pide un algoritmo que nos calcule la suma de de los N primeros números naturales. N se leera por teclado
*/

#include<iostream>
using namespace std;

int main() {
	int n;
	int suma;
	float x;
	 Se pide un algoritmo que nos calcule la suma de de los N primeros números naturales. N se leera por teclado
	cout << "Ingrese un número cualquiera: " << endl;
	cin >> n;
	suma = 0;
	for (x=1;x<=n;x++) {
		cout << x << endl;
		suma = suma+x;
	}
	cout << "La suma de los primeros N números naturales es: " << suma << endl;
	return 0;
}

