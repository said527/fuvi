Algoritmo Algortimo15
	definir contador como entero
	definir contraseņa Como Caracter
	contador = 0
	contraseņa = tuani
	mientras contador < 3 Hacer
		escribir "Ingrese su contraseņa: "
		leer contraseņa
		si (contraseņa = 'tuani' ) Entonces
			Escribir "Su contraseņa es correcta :)"
			contador = contador + 3
			
		sino 
			si contador = 3 Entonces
				escribir "Lo siento has fallado los 3 intentos del sistema"
			SiNo
				Escribir "La contraseņa es incorrecta"
			FinSi
			contador = contador + 1
		FinSi
	
	fin mientras
FinAlgoritmo
