Algoritmo Algortim04
	//Diseñar un algoritmo que pida 3 números; si el primero es negativo, debe imprimir el producto de los 3 números y si no es, imprimir la suma de los 3 números.
	Definir uno,dos,tres,suma,producto Como Entero
	
	Escribir 'Ingrese el primer número: ' Sin Saltar
	Leer uno
	Escribir 'Ingrese el segundo número: ' Sin Saltar
	Leer dos
	Escribir 'Ingrese el tercer número: ' Sin Saltar
	Leer tres
	producto <- uno*dos*tres
	suma <- uno+dos+tres
	Si (uno<0) Entonces
		Escribir 'El resultado final es: ',producto
	SiNo
		Escribir "El resultado: " suma
	FinSi
	escribir "Fin del algortitmo"
FinAlgoritmo
