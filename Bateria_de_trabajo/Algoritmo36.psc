Algoritmo Algoritmo36
	//Desarrolle un algoritmo para leer el nombre de un empleado, el salario básico por hora y el numero de horas trabajadas durante una semana. Calcule el salario neto, teniendo en cuenta que, si 
	//el numero de horas trabajadas durante la semana es mayor a 48 horas, esas horas demás se consideran horas extras y teniendo un recargo del 35%(Incentivo). Imprima el nombre completo y su salario neto.
	Definir nombre como cadena
	definir ganaHora, horasExtras, horasTrabajadas, salarioExtra, salarioNeto, salarioNetoExtra, total Como Entero
	
	Escribir "Ingrese su nombre completo: " Sin Saltar
	leer nombre
	escribir "Ingrese cuanto gana por hora: " Sin Saltar
	leer ganaHora
	x = 1
	Mientras x <= 5 Hacer
		Escribir "Ingrese las horas trabajadas en el día " x
		leer horasTrabajadas
		total = total + horasTrabajadas
		x =  x + 1
	FinMientras
	si (total >= 48) Entonces
		escribir "Usted ha trabajado más horas de las establecidas"
		horasExtras = total - 48
		salarioExtra = ((35*100)/ganaHora ) * horasExtras
		salarioNetoExtra = 48 * ganaHora + salarioExtra
		Escribir "El colaborador de nombre: " nombre
		escribir "La cantidad de horas extras trabajdas es de: " horasExtras
		Escribir "Su salario por las horas extras es de: " salarioExtra " cordobas"
		Escribir "Su salario Neto es de: " salarioNetoExtra " cordobas :)"
	sino
		salarioNeto = total * ganaHora
		Escribir "El colaborador de nombre: " nombre
		Escribir "Su salario Neto es de: " salarioNeto " cordobas"
	FinSi
FinAlgoritmo
