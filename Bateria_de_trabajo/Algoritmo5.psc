Algoritmo Algoritmo5
	//Realizar un algortitmo que lea un n�mero. En caso que ese n�mero sea 0 o menor que 0, se saldr� del programa imrpimiendo antes un mensaje de error. Si es mayor que 0, se debera calcular su cuadrado y la ra�z cuadrada del mismo,
	//visualizando el n�mero que ha tecleado el usuario y su resultado (del n�mero x, su potencia x y su ra�z x) 
	Definir num, potencia, ra�z Como Entero
	
	escribir "Ingrese el n�mero: "Sin Saltar
	leer num
	
	potencia = num^2
	ra�z = rc(num)
	si (num <= 0) Entonces
		Escribir "N�mero invalido "
		
	sino 
		Escribir "Del n�mero: " num 
		escribir " su potencia es: " potencia 
		escribir " y su ra�z es: " ra�z
		
	FinSi
	escribir "Fin del algoritmo "
FinAlgoritmo
