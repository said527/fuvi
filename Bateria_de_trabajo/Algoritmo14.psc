Algoritmo Algoritmo14
	//4. Dada una secuencia de n�meros le�dos por teclado, que acabe con un -1 por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,??,-1; Realizar el algoritmo que calcule1
		//la media aritm�tica. Suponemos que el usuario no insertar� n�mero negativos.
	escribir "Para finalizar el algortimo solo ingrese un menos uno"
	definir num, media, resultado como real
	media = 0 
	resultado = 0
	Mientras (num > -1) Hacer
		escribir "Ingrese un n�mero: "
		leer num
		si (num <> -1) Entonces
			resultado = resultado + num
			media = resultado / num
		FinSi
	fin mientras
	Escribir "La media aritmetica de los numeros es: " media
FinAlgoritmo
