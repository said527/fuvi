Algoritmo Algoritmo16
//6. Algoritmo que lea números enteros hasta teclear 0, y nos muestre el máximo, el mínimo y la media de todos ellos.
	 definir min, max, media, num Como Real
		escribir "Ingrese un numero: " 
		leer num
		min = num
		max = num
		suma = 0
		Mientras (num <> 0) Hacer
			si (num = max) Entonces
				max = num
			FinSi
			si (num < min) Entonces
				min = num
			FinSi
			suma = suma+num
			contador =contador + 1
			leer num
		FinMientras
		media = suma/(contador)
		Escribir "El maximo es " max
		Escribir "El minimo es " min
		Escribir "La media es " media

	
FinAlgoritmo
