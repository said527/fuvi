/* Se pide representar el algoritmo que nos calcule la suma de los N primeros números pares. Es decir, si insertamos un 5, nos haga la suma de 6+8+10+12+14.
*/	

#include<iostream>
using namespace std;


int main() {
	int cont;
	int n;
	float suma;
	int x;
	
	cout << "Ingrese un número cualquiera: " << endl;
	cin >> n;
	x = 1;
	cont = 1;
	while ((cont<=n)) {
		if ((x%2==0)) {
			suma = suma+x;
			cout << x << endl;
			cont = cont+1;
		}
		x = x+1;
	}
	cout << "La suma de los N números pares es: " << suma << endl;
	return 0;
}
