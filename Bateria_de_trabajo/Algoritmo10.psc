Algoritmo Algoritmo10
	//Algoritmo que nos diga si una persona puede acceder a cursar un ciclo formativo de grado superior o no, para acceder a un grado superior, si se tiene un titulo de bachiller, en caso de no tener, se puede acceder si 
	//hemos superado la prueba de acceso(admisión)
	Escribir "***Para tener un titulo de grado superior debera tener un diploma de bachiller*** "
	escribir "¿Tiene usted un diploma de bachiller?"
	leer bachi
	si (bachi = 'si') Entonces
		escribir "Felicidades usted puede cursar un ciclo de grado superior :) "
	SiNo
		escribir "Aunque no tenga diploma de bachiller, puede acceder si usted supero la prueba de admisión "
		escribir "¿Usted supero la prueba de admisión? "
		leer admin
		si (admi = 'si') Entonces
			escribir "Usted puede cursar un ciclo de grado superior :) "
		sino
			escribir "Lo sentimos mucho, no cumple con ninguno de los requisitos para entrar :( "
			
		FinSi
	FinSi
	Escribir "Fin del algortimo "
FinAlgoritmo
