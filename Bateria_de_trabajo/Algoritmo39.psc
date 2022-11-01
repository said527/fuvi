Algoritmo Algoritmo39
	//Suponga que usted es un ejecutivo de una microfinanciera, encargado de entregar créditos a las personas. De acuerdo a las reglas del banco para
	//el que usted trabaja, el monto del crédito al que una persona puede acceder depende de su sueldo. Para determinar el crédito al que una
	//persona puede optar, debe utilizar la siguiente tabla entregada por el banco:
	//Rangos de sueldos Monto de derecho a crédito
	//Sueldo menor a C$200,000 C$0
	//Sueldo entre C$200,000 y C$500,000 C$500,000
	//Sueldo entre C$500,000 y C$1,000,000 C$2,000,000
	escribir "Según la siguiente tabla"
	Escribir "Sueldo menor a C$200,000 (1)"
	escribir "Sueldo entre C$200,000 y C$500,000 (2)"
	escribir "Sueldo entre C$500,000 y C$1,000,000 (3)"
	Escribir "¿De cuánto es su salario?, aproximadamente"
	leer salario
	si (salario = 1 ) Entonces
		escribir "Lo sentimos mucho no le podemos ofrecer un credito "
	FinSi
	si (salario = 2 ) Entonces
		escribir "Usted puede acceder a un credito de C$500,000 cordobas "
	FinSi
	si (salario = 3 ) Entonces
		escribir "Usted puede acceder a un credito de C$2,000,000 cordobas "
	FinSi
FinAlgoritmo
