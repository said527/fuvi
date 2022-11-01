Algoritmo Algortimo17
	//Algoritmo que que visualice la cuenta de los números qeu son multiplos de 2 o de 3 que hay de 1 al 100
	definir cont, dos, tres Como Entero
	cont = 1 
	dos = 0
	tres = 0
	mientras (cont <= 100) Hacer
		si (cont mod 2 = 0) entonces 
			escribir "Multiplo de dos: " cont
			dos = dos + 1
		FinSi
		si (cont mod 3 = 0) Entonces
			escribir "Multiplo de tres: " cont
			tres = tres + 1 
		FinSi
		cont = cont + 1
		
	FinMientras
	Escribir "Los números multiplos de 2 son: " dos
	escribir "Los números multiplos de 3 son: " tres
FinAlgoritmo
