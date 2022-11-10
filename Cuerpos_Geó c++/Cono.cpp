
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float al;
	float at;
	float g;
	float h;
	float pi;
	float r;
	float v;
	cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
	cout << "Ingrese la altura del cono: " << endl;
	cin >> h;
	cout << "Ingrese el radio de la base del cono: " << endl;
	cin >> r;
	cout << "Ingrese la generatriz del cono: " << endl;
	cin >> g;
	al = M_PI*r*g;
	at = al+(M_PI*pow(r,2));
	v = (M_PI*pow(r,2)*h)/3;
	cout << "El área lateral del cono es de " << al << " cm2" << endl;
	cout << "El área total del cono es de " << at << " cm2" << endl;
	cout << "El volumen del cono es de " << v << " v" << endl;
	return 0;
}

