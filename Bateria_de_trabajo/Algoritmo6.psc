Algoritmo Algoritmo6
	// Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas hay en su curso actual. Diseñar un Algoritmo para este proposoto
	Definir B,G,niños,niñas Como Real
	Escribir 'Ingrese la cantidad de niños: ' Sin Saltar
	Leer B
	Escribir 'Ingrese la cantidad de niñas: ' Sin Saltar
	Leer G
	total <- B+G
	
	Si (B < 0 y G < 0) Entonces
		escribir "Error, revise el el primer o segundo número "
		
	sino 
		niños = (B / total) * 100
		niñas = (G / total) * 100
		Escribir "El porcentaje de niños es: " niños 
		Escribir "El porcentaje de niñas es: " niñas
	fin si
FinAlgoritmo
