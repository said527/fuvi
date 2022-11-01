Algoritmo Algoritmo18
	definir d, m, a Como Entero
	definir nomMes Como Caracter
	Escribir "Ingrese el día  "
	leer d
	si (d < 1 o d > 31) Entonces
		Repetir
			Escribir "Ese día no existe >:("
			escribir "Ingrese un día "
			leer d
		Hasta Que  (d > 0 y d <32)
	FinSi
	escribir "Ingrese el mes "
	leer m
	si (m < 1 o m > 12)
		Repetir
			escribir "Mes inexistente >:("
			Escribir "Ingrese un mes "
			leer m
		Hasta Que  (m > 0 y m <13)
	FinSi
	escribir "Ingrese el año "
	leer a
	si (a < 1)
		Repetir
			Escribir "Ese año no existe >:("
			Escribir "Ingrese un año "
			Leer a
		Hasta Que (a > 0)
	FinSi
	segun m Hacer
		Caso 1:nomMes= "Enero"
		Caso 2:nomMes= "Febrero"
		Caso 3:nomMes= "Marzo"
		Caso 4:nomMes= "Abril"
		Caso 5:nomMes= "Mayo"
		Caso 6:nomMes= "Junio"
		Caso 7:nomMes= "Julio"
		Caso 8:nomMes= "Agosto"
		Caso 9:nomMes= "Septiembre"
		Caso 10:nomMes= "Octubre"
		Caso 11:nomMes= "Noviembre"
		Caso 12:nomMes= "Diciembre"
	FinSegun
	escribir d " de " nomMes " del " a " :) "
FinAlgoritmo
