Algoritmo Algoritmo27
	//Determinar el precio de un billete de ida y vuelta por avi�n, conociendo la distancia a recorrer, el n�mero de d�as de estancia y sabiendo que si la
	//distancia es superior a 1000 Km, y el n�mero de d�as de estancia es superior a 7, la l�nea a�rea le hace un descuento del 30% (precio por kil�metro
	//US$8.50).
	definir argentina, bolivia, mexico, precio, descuento, PrecioDesceunto Como Real
	definir pais Como entero
	
	argentina = 567894
	bolivia = 399419
	mexico = 166807 
	escribir "Ofertamos los siguientes destinos"
	Escribir "Argentina (1) "
	escribir "Boliva (2)"
	escribir "Mexico (3)"
	Escribir "Para seleccionar su destino marque el n�mero que esta al lado del pa�s que desea ir :)"
	leer pais
	si (pais = 1) Entonces
		precio = argentina * 8.50 *2
	FinSi
	si (pais = 2) Entonces
		precio = bolivia * 8.50 *2
	fin si
	si (pais = 3) Entonces
		precio = mexico* 8.50 * 2
	fin si
	escribir "�Cu�nto tiempo pasara en su destino?"
	leer tiempo
	si (tiempo >= 7 ) Entonces
		escribir "Se le ha dado un descuento del 30%"
		descuento = (precio /10) * 3
		PrecioDesceunto = precio - descuento
		escribir "Su precio total con descuento incluido es: " PrecioDesceunto
	sino 
		escribir "Su precio total es de:" precio
	FinSi
FinAlgoritmo
