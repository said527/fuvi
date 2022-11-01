Algoritmo Algoritmo22 
	//Dado un año, nos diga si es bisiesto o no
	definir año Como Entero
	Escribir "Ingrese un año: "
	leer año
	si (año <= 0) Entonces
		Escribir "año invalido "
	SiNo
		si (año mod 4 = 0) Entonces
			Escribir "El año " año " es bisiesto :)"
		SiNo
			Escribir "El año " año " no es bisiesto :("
		
	fin si
	fin si

FinAlgoritmo
