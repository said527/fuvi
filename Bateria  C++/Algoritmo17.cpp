/*Algoritmo que que visualice la cuenta de los números que son multiplos de 2 o de 3 que hay de 1 al 100
*/

#include<iostream>
using namespace std;


int main() {
	int cont;
	int dos;
	int tres;
	 
	cont = 1;
	dos = 0;
	tres = 0;
	while ((cont<=100)) {
		if ((cont%2==0)) {
			cout << "Multiplo de dos: " << cont << endl;
			dos = dos+1;
		}
		if ((cont%3==0)) {
			cout << "Multiplo de tres: " << cont << endl;
			tres = tres+1;
		}
		cont = cont+1;
	}
	cout << "Los números multiplos de 2 son: " << dos << endl;
	cout << "Los números multiplos de 3 son: " << tres << endl;
	return 0;
}

