

#include<iostream>
#include<cmath>
using namespace std;



int main() {
	float a;
	float ab;
	float ab1;
	float ab2;
	float ac;
	float al;
	float ap;
	float at;
	float b;
	float g;
	float h;
	float l;
	int opc;
	float pi;
	float r;
	float rmayor;
	float v;
	do {
		cout << "Con este programa podras resolver los siguientes cuerpos geómetricos:" << endl;
		cout << "1-Cilidro" << endl;
		cout << "2-Cono" << endl;
		cout << "3-Dodecaedro" << endl;
		cout << "4-Esfera" << endl;
		cout << "5-Hexaedro" << endl;
		cout << "6-Piramide" << endl;
		cout << "7-Prisma" << endl;
		cout << "8-Tetraedro" << endl;
		cout << "9-Tronco de cono" << endl;
		cout << "0-Salir" << endl;
		cout << "Que cuerpo geómetrico desea calcular:" << endl;
		cin >> opc;
		switch (opc) {
		case 1:
			cout << "Usted a seleccionado el cilindro " << endl;
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
			break;
		case 2:
			cout << "Usted ha seleccionado el cono" << endl;
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
			break;
		case 3:
			cout << "Usted ha seleccionado el dodecaedro" << endl;
			cout << "Ingrese la longitud de la apotema: " << endl;
			cin >> ap;
			cout << "Ingrese la longitud de la arista: " << endl;
			cin >> a;
			at = 30*a*ap;
			ac = at/12;
			v = (1/4)*((15)+7*sqrtf(5))*pow(a,2);
			cout << "El área total del dodecaedro es de " << at << endl;
			cout << "El área de una car del dodecaedro es de " << ac << endl;
			cout << "El volumen del dodecaedro es de " << v << endl;
			break;
		case 4:
			cout << "Usted ha seleccionado la esfera" << endl;
			cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
			cout << "Ingrese el radio de la esfera: " << endl;
			cin >> r;
			a = 4*M_PI*pow(r,2);
			v = (4*M_PI*pow(r,3))/3;
			cout << "El área de la esfera es de " << a << " cm2" << endl;
			cout << "El volumen de la esfera es de " << v << " cm2" << endl;
			break;
		case 5:
			cout << "Usted ha seleccionado el hexaedro" << endl;
			cout << "****La unidad de medida que se trabaja es de cm y cm2****" << endl;
			cout << "Ingrese la longitud de la arista: " << endl;
			cin >> a;
			ac = pow(a,2);
			at = 6*(ac);
			v = pow(a,3);
			cout << "El área de una de las caras es de " << ac << " cm2" << endl;
			cout << "El área total es de " << at << " cm2" << endl;
			cout << "El volumen total es de " << v << " cm3" << endl;
			break;
		case 6:
			cout << "Usted ha seleccionado la piramide" << endl;
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
			break;
		case 7:
			cout << "Usted ha seleccionado el prisma" << endl;
			cout << "Ingrese la longitud de la base: " << endl;
			cin >> b;
			cout << "Ingrese la altura: " << endl;
			cin >> h;
			cout << "Ingrese la longitud de los lados: " << endl;
			cin >> l;
			cout << "Ingrese la longitud de la apotema: " << endl;
			cin >> ap;
			al = 5*(b*h);
			ab = (((5*l)*ap)/2)*2;
			at = al+ab;
			v = ab*h;
			cout << "El area lateral es de " << al << " cm2 " << endl;
			cout << "El area total es de " << at << " cm2" << endl;
			cout << "El volumen del prisma es de: " << v << " cm2" << endl;
			break;
		case 8:
			cout << "Usted ha seleccionado el tetraedro" << endl;
			cout << "****La unidad de medida que se trabaja es de cm, cm2 y cm3****" << endl;
			cout << "Ingrese la longitud de la arista: " << endl;
			cin >> a;
			at = sqrtf(3)*pow(a,2);
			ac = at/4;
			v = (sqrtf(2)*pow(a,3))/12;
			cout << "El área total es de " << at << " cm2" << endl;
			cout << "El área de una cara es de " << ac << " cm2" << endl;
			cout << "El volumen del tetraedro es de " << v << " cm3" << endl;
			break;
		case 9:
			cout << "Usted ha seleccionado el tronco de cono" << endl;
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
			break;
		case 0:
			cout << "Espero que el algoritmo le haya gustado :)" << endl;
			break;
		}
	} while ((opc==0));
	return 0;
}

