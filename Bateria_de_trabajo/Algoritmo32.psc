Algoritmo Algoritmo32
	//Dados X e Y enteros positivos, diseña un algoritmo que dé el máximo común divisor.
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
		Escribir "El máximo común divisor es: " max 
	SiNo
		Escribir "Debes ingresar numeros positivos "
	FinSi

	escribir "Intente con x e y, pero no sé por que no se pudo :("
FinAlgoritmo
