Algoritmo Algoritmo9
	//Modificar el algoritmo anterior, en forma que, si se teclea un cero, se vuelva a pedir el n�mero por teclado (as� hasta que se teclee un n�mero mayor que 0)
	Escribir "Ingrese el n�mero: " Sin Saltar
	leer num
	si (num <= 0) Entonces
		Repetir
			Escribir "Ingrese nuevamente el n�mero >:("
			leer num
		hasta que (num > 0)
		fin si
		si (num mod 2 = 0) Entonces
			escribir "El n�mero que usted ingreso es par "
		SiNo
			escribir "El n�mero que usted ingreso es impar"
			FinSi
	Escribir "Fin del algoritmo :)"
FinAlgoritmo
