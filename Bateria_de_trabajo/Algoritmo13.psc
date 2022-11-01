Algoritmo Algoritmo13
	
	definir N, x, cont Como Entero 
	escribir "Ingrese un número cualquiera: "
	leer N
	x = 1
	cont = 1
	Mientras (cont <= N) Hacer
		si (x mod 2 = 0) Entonces
			suma = suma + x 
			Escribir x
			cont = cont + 1
		FinSi  
		x = x + 1
	FinMientras
	Escribir "La suma de los N números pares es: " suma
FinAlgoritmo
