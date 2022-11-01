Algoritmo Algoritmo28
	Definir n,sumaPares, sumaImpares, media, pares, impares, mediaPares, mediaImpares Como Entero
	pares = 0
	sumaImpares = 0
	sumaPares = 0
	impares = 0
	para x = 1 Hasta 10 Hacer
		Escribir "Ingrese los numeros: " 
		leer n
		si (n mod 2 = 0) Entonces
			sumapares = sumapares + n
			pares = pares + 1
		SiNo
			sumaImpares = sumaImpares + n
			impares = impares + 1
		FinSi
	FinPara
	//se debe corregir la media
	mediaPares = sumapares / pares
	mediaImpares = sumaImpares / impares
	Escribir "Los numeros pares son: " pares 
	Escribir "Los numeros impares son:" impares
	Escribir "La media de pares es: " mediaPares
	Escribir "La media de impares es: " mediaImpares
FinAlgoritmo
