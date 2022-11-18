


#include<iostream>

using namespace std;

int main(){
/*	float a, b, c, d, resultado = 0;
	
	cout<<"Ingrese el valor de a y b separados por espacios:"<<endl; cin>>a>>b;
	cout <<"Ingrese el valor de c y d separados por espacios:"<<endl; cin>>c>>d;
	resultado = (a+b)/(c+d);
	cout.precision(3);
	cout<<"El resultado es de: "<<resultado<<endl;
	
*/
  int x,y;
  int aux;
  
  cout<<"Ingrese el valor de x:";cin>>x;
  cout<<"Ingrese el valor de y:";cin>>y;
  
  aux = x;
  x = y;
  y = aux;
  
  cout<<"El nuevo valor de x es: "<<x<<endl;
  cout<<"El nuevo valor de y es: "<<y<<endl;
	return 0;
}