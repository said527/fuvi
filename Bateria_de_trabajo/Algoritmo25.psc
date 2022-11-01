Algoritmo Algoritmo25
	definir tem, f, c Como Entero
	Escribir "A que unidad de temperatura desea convertir (1 para f a c y 0 para c a f) "
	leer tem
	f = (c * 1.8) + 32
	
	si (tem = 1 ) Entonces
		escribir "Ingrese la temperatura que desea convertir en grados fahrenheit: "
		leer c
		Escribir "La temperatura es de: " f " grados fahrenheit :) "
	FinSi
	si (tem = 0)Entonces
		
		escribir "Ingrese la temperatura que desea convertir a grados celcius: "
		leer f
		c = (f - 32) / 1.8
		Escribir "La temperatura es de: " c " grados celcius :) "
	FinSi
FinAlgoritmo
