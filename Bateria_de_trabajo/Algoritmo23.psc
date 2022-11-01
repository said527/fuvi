Algoritmo Algoritmo23
	//El siguiente es el menú de un restaurante de bocadillos. Diseñar un algoritmo capaz de leer el número de unidades consumidas de cada
	//alimento ordenado y calcular la cuenta total. Vamos a suponer que estos precios son fijos, es decir, que son.
	Definir BocadilloJamon, Refresco, Cerveza Como Real
	definir ing, can como real
	BocadilloJamon = 1.5
	Refresco = 1.05
	Cerveza = 0.75
	Escribir "¿Qué fue lo que ingerio? "
	leer ing
	escribir "BocadilloJamon = 1.5, Refresco = 1.05, Cerveza = 0.75"
	escribir "¿Cuanto de este producto ingerió?"
	leer can 
	si (ing = 1) Entonces
		cuentaTotal = can * BocadilloJamon
	FinSi
	si (ing = 2 ) Entonces
		cuentaTotalTotal = can * Refresco
	FinSi
	si (com = 0 ) Entonces
		cuentaTotal = can * Cerveza
	FinSi
	Escribir "Gracias por preferirnos :) "
	escribir "Su cuenta total es de: " cuentaTotalTotal " cordobas"
	
	
	
FinAlgoritmo
