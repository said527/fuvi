Algoritmo Algoritmo31
	//Dado un n�mero entero n, encuentre sus divisores
	definir num, x Como Entero
	Escribir "Ingrese un n�mero: "
	leer num
	x = 1
	mientras (x <> num) Hacer
		si (num mod x = 0) Entonces
			Escribir "El " x " es divisor de " num
			
		FinSi
		x = x +1
	FinMientras
	
FinAlgoritmo
