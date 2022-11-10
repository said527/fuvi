// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int ab;
	int al;
	int ap;
	int at;
	int b;
	int h;
	int l;
	int v;
	cout << "La unidad de medida que se trabaja es de cm y cm2" << endl;
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
	return 0;
}

