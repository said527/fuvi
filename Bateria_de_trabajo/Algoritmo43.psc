Algoritmo Algoritmo43
	
	Escribir "Ingrese su nombre: "
	leer nom
	escribir "Ingrese su estatura en m: "
	leer estatura
	escribir "Ingrese su peso en kg:"
	leer peso
	Escribir "Ingrese su número celular: "
	leer num
	
	pesoIdeal = peso / estatura^2
	
	Escribir "Su peso ideal es de " pesoIdeal
	si (pesoIdeal = 20) Entonces
		escribir "Persona de peso ideal"
	SiNo
		
		si (PesoIdeal > 20 y pesoIdeal < 23) Entonces
			Escribir "Persona de peso normal"
		FinSi
		si (pesoIdeal > 23 y pesoIdeal < 26) Entonces
			escribir "Persona con sobrepeso"
		FinSi
		si (pesoIdeal > 26) Entonces
			escribir "Persona obesa"
		fin si 
	FinSi
	
		
FinAlgoritmo
