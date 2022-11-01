Algoritmo Algoritmo5
	//Realizar un algortitmo que lea un número. En caso que ese número sea 0 o menor que 0, se saldrá del programa imrpimiendo antes un mensaje de error. Si es mayor que 0, se debera calcular su cuadrado y la raíz cuadrada del mismo,
	//visualizando el número que ha tecleado el usuario y su resultado (del número x, su potencia x y su raíz x) 
	Definir num, potencia, raíz Como Entero
	
	escribir "Ingrese el número: "Sin Saltar
	leer num
	
	potencia = num^2
	raíz = rc(num)
	si (num <= 0) Entonces
		Escribir "Número invalido "
		
	sino 
		Escribir "Del número: " num 
		escribir " su potencia es: " potencia 
		escribir " y su raíz es: " raíz
		
	FinSi
	escribir "Fin del algoritmo "
FinAlgoritmo
