Algoritmo Algoritmo32
	//Dados X e Y enteros positivos, dise�a un algoritmo que d� el m�ximo com�n divisor.
	definir a, b, x, max como entero
	Escribir "Ingrese dos numeros: "
	leer a, b
	si (a > 0 y b > 0) Entonces
		max = 1
		x = 1 
		mientras x <= a Hacer
			si (a mod x = 0 y b mod x = 0) Entonces
				si (x > max) Entonces
					max = x
				FinSi
			FinSi
			x = x + 1
		FinMientras
		Escribir "El m�ximo com�n divisor es: " max 
	SiNo
		Escribir "Debes ingresar numeros positivos "
	FinSi

	escribir "Intente con x e y, pero no s� por que no se pudo :("
FinAlgoritmo
