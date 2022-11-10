
#include<iostream>
using namespace std;



int main() {
	float ab;
	float al;
	float ap;
	float at;
	float b;
	float h;
	float v;
	cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
	cout << "Ingrese la altura: " << endl;
	cin >> h;
	cout << "Ingrese la longitud de la base: " << endl;
	cin >> b;
	cout << "Ingrese la apotema: " << endl;
	cin >> ap;
	al = 4*(b*h)/2;
	ab = b*b;
	at = al+ab;
	v = (ab*h)/3;
	cout << "El área lateral de la piramide es de: " << al << " cm2" << endl;
	cout << "El área total de la piramide es de: " << at << " cm2" << endl;
	cout << "El volumen de la piramide es de: " << v << " cm2" << endl;
	return 0;
}

