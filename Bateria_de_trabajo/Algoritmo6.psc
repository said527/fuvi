Algoritmo Algoritmo6
	// Un colegio desea saber qu� porcentaje de ni�os y qu� porcentaje de ni�as hay en su curso actual. Dise�ar un Algoritmo para este proposoto
	Definir B,G,ni�os,ni�as Como Real
	Escribir 'Ingrese la cantidad de ni�os: ' Sin Saltar
	Leer B
	Escribir 'Ingrese la cantidad de ni�as: ' Sin Saltar
	Leer G
	total <- B+G
	
	Si (B < 0 y G < 0) Entonces
		escribir "Error, revise el el primer o segundo n�mero "
		
	sino 
		ni�os = (B / total) * 100
		ni�as = (G / total) * 100
		Escribir "El porcentaje de ni�os es: " ni�os 
		Escribir "El porcentaje de ni�as es: " ni�as
	fin si
FinAlgoritmo
