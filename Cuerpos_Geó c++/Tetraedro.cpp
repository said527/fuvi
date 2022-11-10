
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float ac;
	float at;
	float v;
	cout << "****La unidad de medida que se trabaja es de cm, cm2 y cm3****" << endl;
	cout << "Ingrese la longitud de la arista: " << endl;
	cin >> a;
	at = sqrtf(3)*pow(a,2);
	ac = at/4;
	v = (sqrtf(2)*pow(a,3))/12;
	cout << "El área total es de " << at << " cm2" << endl;
	cout << "El área de una cara es de " << ac << " cm2" << endl;
	cout << "El volumen del tetraedro es de " << v << " cm3" << endl;
	return 0;
}

