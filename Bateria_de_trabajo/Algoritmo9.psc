Algoritmo Algoritmo9
	//Modificar el algoritmo anterior, en forma que, si se teclea un cero, se vuelva a pedir el número por teclado (así hasta que se teclee un número mayor que 0)
	Escribir "Ingrese el número: " Sin Saltar
	leer num
	si (num <= 0) Entonces
		Repetir
			Escribir "Ingrese nuevamente el número >:("
			leer num
		hasta que (num > 0)
		fin si
		si (num mod 2 = 0) Entonces
			escribir "El número que usted ingreso es par "
		SiNo
			escribir "El número que usted ingreso es impar"
			FinSi
	Escribir "Fin del algoritmo :)"
FinAlgoritmo
