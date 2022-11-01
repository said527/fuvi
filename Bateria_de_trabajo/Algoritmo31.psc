Algoritmo Algoritmo31
	//Dado un número entero n, encuentre sus divisores
	definir num, x Como Entero
	Escribir "Ingrese un número: "
	leer num
	x = 1
	mientras (x <> num) Hacer
		si (num mod x = 0) Entonces
			Escribir "El " x " es divisor de " num
			
		FinSi
		x = x +1
	FinMientras
	
FinAlgoritmo
