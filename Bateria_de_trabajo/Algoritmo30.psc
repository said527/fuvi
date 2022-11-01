Algoritmo Algoritmo30
	//Realizar un programa que cree un arreglo de 10 enteros cuyos valores son introducidos por el usuario. También debe pedir un valor que se deberá
	//buscar en el arreglo. El algoritmo debe decir en cuál posición se encuentra el valor que queríamos buscar.
	definir x, num, c, vector como entero
	dimension vector[10]
	para x = 1 hasta 10 con paso 1 Hacer
		Escribir "Ingrese un numero"
		leer vector(x)
	FinPara
	Escribir "Ingrese el numero a buscar "
	leer num
	c = 0
	para x = 1 Hasta 10 Con Paso 1 Hacer
		si (num = vector(x)) Entonces
			Escribir "El numero " num " se encuentra en la posición " x
			c = 1
		FinSi
	FinPara
	si c = 0 Entonces
		Escribir "El numero " num " No se encuentra "
	FinSi
FinAlgoritmo
