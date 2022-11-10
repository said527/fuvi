/*Leer tres números que denoten una fecha (día, mes, año). Comprobar que es una fecha válida. Si no es válida escribir un mensaje de error. Si es válida
escribir la fecha cambiando el número del mes por su nombre. Ej. Si se introduce 1 2 2021, se deberá imprimir “1 de febrero de 2021”. El año debe
 ser mayor que 0
*/	 
#include<iostream>
using namespace std;


int main() {
	int a;
	int d;
	int m;
	string nommes;
	 
	cout << "Ingrese el día  " << endl;
	cin >> d;
	if ((d<1 || d>31)) {
		do {
			cout << "Ese día no existe >:(" << endl;
			cout << "Ingrese un día " << endl;
			cin >> d;
		} while (!((d>0 && d<32)));
	}
	cout << "Ingrese el mes " << endl;
	cin >> m;
	if ((m<1 || m>12)) {
		do {
			cout << "Mes inexistente >:(" << endl;
			cout << "Ingrese un mes " << endl;
			cin >> m;
		} while (!((m>0 && m<13)));
	}
	cout << "Ingrese el año " << endl;
	cin >> a;
	if ((a<1)) {
		do {
			cout << "Ese año no existe >:(" << endl;
			cout << "Ingrese un año " << endl;
			cin >> a;
		} while ((a<=0));
	}
	switch (m) {
	case 1:
		nommes = "Enero";
		break;
	case 2:
		nommes = "Febrero";
		break;
	case 3:
		nommes = "Marzo";
		break;
	case 4:
		nommes = "Abril";
		break;
	case 5:
		nommes = "Mayo";
		break;
	case 6:
		nommes = "Junio";
		break;
	case 7:
		nommes = "Julio";
		break;
	case 8:
		nommes = "Agosto";
		break;
	case 9:
		nommes = "Septiembre";
		break;
	case 10:
		nommes = "Octubre";
		break;
	case 11:
		nommes = "Noviembre";
		break;
	case 12:
		nommes = "Diciembre";
		break;
	}
	cout << d << " de " << nommes << " del " << a << " :) " << endl;
	return 0;
}

