
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float ab1;
	float ab2;
	float al;
	float at;
	float g;
	float h;
	float pi;
	float r;
	float rmayor;
	float v;
	cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
	cout << "Ingrese la altura del tronco de cono: " << endl;
	cin >> h;
	cout << "Ingrese el radio menor del tronco de cono: " << endl;
	cin >> r;
	cout << "Ingrese el radio mayor del tronco de cono: " << endl;
	cin >> rmayor;
	cout << "Ingrese la longitud de la generatriz: " << endl;
	cin >> g;
	al = M_PI*g*(rmayor+r);
	ab1 = M_PI*pow(rmayor,2);
	ab2 = M_PI*pow(r,2);
	at = al+ab1+ab2;
	v = M_PI*h*(pow(rmayor,2)+pow(r,2)+(rmayor*r))/3;
	cout << "El área lateral del tronco de cono es de " << al << " cm2" << endl;
	cout << "El área total del tronoco de cono es de " << at << " cm2" << endl;
	cout << "El volumen del tronoco de cono es de " << v << " cm2" << endl;
	return 0;
}

