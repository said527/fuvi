Algoritmo Algoritmo29
	//Dados 3 números, determinar si la suma de dos de ellos es igual al tercero.
	//Si se cumple, escribir "iguales", si no, escribir "distintos"
	definir primerNUm, segundoNum, tercerNum como real
	escribir "Ingrese el primer numero:"
	leer primerNum
	Escribir "ingres el segundo numero:"
	leer segundoNum
	escribir "Ingrese el tercer numero:"
	leer tercerNum
	
	si(primerNUm + segundoNum = tercerNum) Entonces
		escribir "Iguales"
	SiNo
		si (segundoNum + tercerNum = primerNum) Entonces
		escribir "Iguales"
		si (primerNUm + tercerNum = segundoNum) Entonces
			escribir "Iguales"
			
		
		fin si
	sino 
		escribir "Distintos"
	FinSi
	fin si
FinAlgoritmo
