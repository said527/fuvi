

#include<iostream>
using namespace std;

int main() {
	float b;
	float ckto;
	float ib;
	float ic;
	float ie;
	float rb;
	float rce;
	float re;
	float vbb;
	float vbe;
	float vcc;
	float vce;
	cout << "Bienvenido al " << endl;
	cout << "El ckto que desea resolver, ¿tiene resistencia en el emisor? (Si = 1 y No = 0)" << endl;
	cin >> ckto;
	if ((ckto==0)) {
		cout << "Ingrese el voltaje de base: " << endl;
		cin >> vbb;
		cout << "Ingrese la resistencia de la base:" << endl;
		cin >> rb;
		cout << "Ingrese la resistencia del colector:" << endl;
		cin >> rce;
		cout << "Ingrese el voltaje del colector: " << endl;
		cin >> vcc;
		cout << "Ingrese la ganancia:" << endl;
		cin >> b;
		vbe = 0.8;
		ib = (vbb-vbe)/rb;
		ic = b*ib;
		ie = ib+ic;
		vce = vcc-b*(vbb-vbe)/rb*rce;
		cout << "****Datos de entrada****" << endl;
		cout << "La corriente que pasa por la base es de " << ib << " A" << endl;
		cout << "La corriente que pasa por el colector es de " << ic << " A" << endl;
		cout << "La corriente que pasa por el emisor es de " << ie << " A" << endl;
		cout << "****Datos de salida****" << endl;
		cout << "El voltaje del colector emisor es de " << vce << " v" << endl;
	} else {
		if ((ckto==1)) {
			cout << "Ingrese el voltaje de base: " << endl;
			cin >> vbb;
			cout << "Ingrese la resistencia de la base:" << endl;
			cin >> rb;
			cout << "Ingrese la resistencia del emisor " << endl;
			cin >> re;
			cout << "Ingrese la resistencia del colector:" << endl;
			cin >> rce;
			cout << "Ingrese el voltaje del colector: " << endl;
			cin >> vcc;
			cout << "Ingrese la ganancia:" << endl;
			cin >> b;
			vbe = 0.8;
			ib = (vbb-vbe)/(rb+(b+1)*re);
			ic = b*ib;
			ie = ic+ib;
			vce = vcc-ic*rce-ie*re;
			cout << "****Datos de entrada****" << endl;
			cout << "La corriente que pasa por la base es de " << ib << " A" << endl;
			cout << "La corriente que pasa por el colector es de " << ic << " A" << endl;
			cout << "La corriente que pasa por el emisor es de " << ie << " A" << endl;
			cout << "****Datos de salida****" << endl;
			cout << "El voltaje del colector emisor es de " << vce << " v" << endl;
		}
	}
	return 0;
}

