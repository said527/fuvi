
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float ab;
	float al;
	float at;
	float h;
	float pi;
	float r;
	float v;
	cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
	cout << "Ingrese la altura: " << endl;
	cin >> h;
	cout << "Ingrese el radio: " << endl;
	cin >> r;
	al = 2*M_PI*r*h;
	ab = M_PI*pow(r,2);
	at = 2*M_PI*r*(h+r);
	v = ab*h;
	cout << "El area lateral del ciindro es de: " << al << " cm2" << endl;
	cout << "El area total es de: " << at << " cm2" << endl;
	cout << "El volumen del cilindro es de: " << v << " cm2" << endl;
	return 0;
}

