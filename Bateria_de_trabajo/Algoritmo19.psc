Algoritmo Algoritmo19
	//Calcular las calificaciones de un grupo de alumnos. La nota final de cada alumno se calcula seg�n el siguiente criterio: la parte pr�ctica vale el 10%;
	//la parte de problemas vale el 50% y la parte te�rica el 40%. El algoritmo leer� el nombre del alumno, las tres notas, escribir� el resultado y volver� a
	//pedir los datos del siguiente alumno hasta que el nombre sea una cadena vac�a. Las notas deben estar entre 0 y 10, si no lo est�n, no imprimir� las
	//notas, mostrar� un mensaje de error y volver� a pedir otro alumno.
	Definir alumno como cadena
	Definir notaPractica, notaProblemas, notaTeoria, notaFinal Como Real
	Escribir "Introduce el nombre del alumno"
	Leer alumno
	Mientras (alumno <> "" ) Hacer
		Escribir "Introduce la nota practica"
		leer notaPractica
		Escribir "Introduce la nota de problemas"
		leer notaProblemas
		Escribir "Introduce la nota de teoria"
		Leer notaTeoria
		si (notaPractica <= 10 y notaPractica >= 0)
			si (notaproblemas <= 10 y notaProblemas >= 0)
			si (notaTeoria <= 10 y notaTeoria >= 0) Entonces
			Escribir "El alumno " alumno
			Escribir "La nota practica es " notaPractica
			Escribir "La nota de problemas es " notaProblemas
			Escribir "La nota de teoria es " notaTeoria
			notaPractica = notaPractica*0.1
			notaProblemas = notaProblemas*0.5
			nota_teoria = notaTeoria*0.4
			notaFinal = notaPractica+notaProblemas+notaTeoria
			Escribir "La nota final es " notaFinal
		Sino
			Escribir "Has escrito una nota incorrecta, vuelve a intentarlo"
		FinSi
	fin si
	fin si
		Escribir "Introduce el nombre de otro alumno"
		Leer alumno
		
	FinMientras


FinAlgoritmo
