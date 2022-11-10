
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float ac;
	float at;
	float v;
	cout << "****La unidad de medida que se trabaja es de cm y cm2****" << endl;
	cout << "Ingrese la longitud de la arista: " << endl;
	cin >> a;
	ac = pow(a,2);
	at = 6*(ac);
	v = pow(a,3);
	cout << "El área de una de las caras es de " << ac << " cm2" << endl;
	cout << "El área total es de " << at << " cm2" << endl;
	cout << "El volumen total es de " << v << " cm3" << endl;
	return 0;
}

