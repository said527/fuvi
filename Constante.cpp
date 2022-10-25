/*
nombre del archivo: sumanumeros.cpp
autor: Danilo Nogurea
lugar: ITV
Instrucciones: Esto solo es una plantilla
*/
#include<iostream>
#include<math>
using namespace std;
//variables globales
  const double pi = 3.141692;
int main(){
	
   double radio, area;
   cout <<"Ingrese el radio del circulo: ";
   cin >>radio;
   area = pi * pow(radio,2);
   cout << "El area de un circulo con un radio " << radio << " es " <<area;
    
 return 0;
}