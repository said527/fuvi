

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float ac;
	float ap;
	float at;
	float v;
	cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
	cout << "Ingrese la longitud de la apotema: " << endl;
	cin >> ap;
	cout << "Ingrese la longitud de la arista: " << endl;
	cin >> a;
	at = 30*a*ap;
	ac = at/12;
	v = 1/4*((15)+7*sqrtf(5))*pow(a,2);
	cout << "El área total del dodecaedro es de " << at << endl;
	cout << "El área de una car del dodecaedro es de " << ac << endl;
	cout << "El volumen del dodecaedro es de " << v << endl;
	return 0;
}