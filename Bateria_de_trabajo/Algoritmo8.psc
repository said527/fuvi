Algoritmo Algoritmo8
	//Reakizar un Algoritmo que, dado un número entero, visualice en la pantalla si es par o impar en el caso que sea 0, debe visualizar "El número no es par ni impar"
	Definir num Como Entero
	Escribir "Ingrese el número: " Sin Saltar
	leer num
	si (num = 0) Entonces
		escribir "El número que usted ingreso no es par ni impar :("
	SiNo
		si (num mod 2 = 0) Entonces
			escribir "El número que usted ingreso es par "
		SiNo
			escribir "El número que usted ingreso es impar"
			
		FinSi
	FinSi
	Escribir "Fin del algoritmo :)"
FinAlgoritmo
