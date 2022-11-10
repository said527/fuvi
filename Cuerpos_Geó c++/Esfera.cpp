

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float pi;
	float r;
	float v;
	cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
	cout << "Ingrese el radio de la esfera: " << endl;
	cin >> r;
	a = 4*M_PI*pow(r,2);
	v = (4*M_PI*pow(r,3))/3;
	cout << "El área de la esfera es de " << a << " cm2" << endl;
	cout << "El volumen de la esfera es de " << v << " cm2" << endl;
	return 0;
}

