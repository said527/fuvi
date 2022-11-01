Algoritmo Algoritmo19
	//Calcular las calificaciones de un grupo de alumnos. La nota final de cada alumno se calcula según el siguiente criterio: la parte práctica vale el 10%;
	//la parte de problemas vale el 50% y la parte teórica el 40%. El algoritmo leerá el nombre del alumno, las tres notas, escribirá el resultado y volverá a
	//pedir los datos del siguiente alumno hasta que el nombre sea una cadena vacía. Las notas deben estar entre 0 y 10, si no lo están, no imprimirá las
	//notas, mostrará un mensaje de error y volverá a pedir otro alumno.
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
