Algoritmo Algortimo15
	definir contador como entero
	definir contraseña Como Caracter
	contador = 0
	contraseña = tuani
	mientras contador < 3 Hacer
		escribir "Ingrese su contraseña: "
		leer contraseña
		si (contraseña = 'tuani' ) Entonces
			Escribir "Su contraseña es correcta :)"
			contador = contador + 3
			
		sino 
			si contador = 3 Entonces
				escribir "Lo siento has fallado los 3 intentos del sistema"
			SiNo
				Escribir "La contraseña es incorrecta"
			FinSi
			contador = contador + 1
		FinSi
	
	fin mientras
FinAlgoritmo
