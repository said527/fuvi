Algoritmo Algortim04
	//Dise�ar un algoritmo que pida 3 n�meros; si el primero es negativo, debe imprimir el producto de los 3 n�meros y si no es, imprimir la suma de los 3 n�meros.
	Definir uno,dos,tres,suma,producto Como Entero
	
	Escribir 'Ingrese el primer n�mero: ' Sin Saltar
	Leer uno
	Escribir 'Ingrese el segundo n�mero: ' Sin Saltar
	Leer dos
	Escribir 'Ingrese el tercer n�mero: ' Sin Saltar
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
