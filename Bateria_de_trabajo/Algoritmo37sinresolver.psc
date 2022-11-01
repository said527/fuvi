Algoritmo Algoritmo37sinresolver
	//Sin resolver
	Definir n, i Como Entero
	Escribir "Ingrese un número"
	leer n
	i = 0
	mientras (n > 1) Hacer
		si (n mod 2 = 0 )
			n = n / 2
		SiNo
			n = n * 3 + 1 
			i = i + 1
		FinSi
	FinMientras
FinAlgoritmo
