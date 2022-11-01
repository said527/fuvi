Algoritmo Algoritmo41
	
	Definir gasolinaRegular, Diesel, gasolinaSuper Como Real
	Definir can, monTotal, com Como real
	
	escribir "¿Que tipo de combustible usa su vehiculo? "
	Escribir "(Si es super = 1, regular = 2, diesel = 0)"
	leer com
	gasolinaSuper = 33.48 
	gasolinaRegular = 32.85
	Diesel = 28.45
	si (com = 1) Entonces
		escribir "¿Cuanta gasolina super va a echar? "
		leer can
		monTotal = can * gasolinaSuper
	FinSi
	si (com = 2 ) Entonces
		escribir "¿Cuanta gasolina regular va a echar? "
		leer can
		monTotal = can * gasolinaRegular
	FinSi
	si (com = 0 ) Entonces
		escribir "¿Cuanto diesel va a echar? "
		leer can
		monTotal = can * Diesel
	FinSi
	escribir "Su monto total es de: " monTotal " cordobas"
FinAlgoritmo
