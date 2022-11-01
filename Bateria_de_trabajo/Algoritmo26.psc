Algoritmo Algortimo26
	//Un alogoritmo que calcule el rpoducto de N números ingresados por el usuario.
	escribir "Para finalizar el algortimo solo ingrese un cero"
	definir num, producto, resultado como entero
	num = 1 
	producto = 0 
	resultado = 1
	Mientras (num <> 0) Hacer
		escribir "Ingrese un número: "
		leer num
		si (num <> 0 ) Entonces
			resultado = resultado * num
			producto = resultado
		FinSi
	fin mientras
	Escribir "El producto de los numeros es: " producto
FinAlgoritmo
