/*// Teniendo en cuenta que la clave es “tuani”, escribir un algoritmo que nos pida una clave. Solo tenemos 3 intentos para acertar, 
si fallamos los 3 intentos nos mostrará un mensaje indicándonos que hemos agotado esos 3 intentos. Si acertamos la clave, saldremos directamente del programa.
*/
#include<iostream>
using namespace std;



int main() {
	int contador;
	string contrasena;
	string tuani;
	// Teniendo en cuenta que la clave es “tuani”, escribir un algoritmo que nos
	// pida una clave. Solo tenemos 3 intentos para acertar, si fallamos los 3
	// intentos nos mostrará un mensaje indicándonos que hemos agotado esos 3
	// intentos. Si acertamos la clave, saldremos directamente del programa.
	contador = 0;
	contrasena = tuani;
	while (contador<3) {
		cout << "Ingrese su contraseña: " << endl;
		cin >> contrasena;
		if ((contrasena=="tuani")) {
			cout << "Su contraseña es correcta :)" << endl;
			contador = contador+3;
		} else {
			if (contador==3) {
				cout << "Lo siento has fallado los 3 intentos del sistema" << endl;
			} else {
				cout << "La contraseña es incorrecta" << endl;
			}
			contador = contador+1;
		}
	}
	return 0;
}

