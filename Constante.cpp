/*
nombre del archivo: sumanumeros.cpp
autor: Danilo Nogurea
lugar: ITV
Instrucciones: Esto solo es una plantilla
*/
#include<iostream>
using namespace std;
//variables globales
  const double pi = 3.141692;
int main(){
	
   double radio, area;
   cout <<"Ingrese el radio del circulo: ";
   cin >>radio;
   area = pi * radio;
   cout << "El area de un circulo con un radio " << radio << " es " <<area;
    
 return 0;
}