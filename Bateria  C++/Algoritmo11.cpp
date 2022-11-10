
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float num;
	int on;
	// Desarrollar un algoritmo que nos calcule el cuadrado de los primeros 9  números naturales.
	cout << "Para encender el algoritmo toque cualquier tecla " << endl;
	cin >> on;
	num = 1;
	do {
		cout << num << " = " << pow(num,2) << endl;
		num = num+1;
	} while (num!=10);
	return 0;
}

