Algoritmo Algoritmo33
	// El colegio "Mi Casita" desea calcular el monto a pagar por inscripción del nuevo año escolar, para las familias con hijos en el colegio. Para ello se
	//conoce el número de hijos que tiene la familia en el colegio, el monto de matrícula por niño, el monto de la mensualidad del mes de septiembre por
	//niño y el monto de la sociedad de padres. Elabore un algoritmo que calcule el total a pagar por la familia, si la sociedad de padres se cobra una vez por
	//familiar y si se otorga un descuento por la cantidad de hijos en el colegio que viene dado por la siguiente tabla:
	//Cantidad de hijos Descuento
	//2 hijos 10%
	//3 hijos 15%
	//>3 hijos 20%
	definir total, total1, total2, total3, totalDescuento1, totalDescuento2, totalDescuento3 Como Real
	Escribir "Cuantos niños tiene en el colegio "
	leer canNiños
	matricula = 500
	total = matricula * canNiños
	
	si (canNiños = 1) Entonces
		Escribir "Su total a pagar es: " total " cordobas "
	FinSi
	si (canNiños = 2) Entonces
		escribir "Como tiene dos niños activos en el colegio se le puede dar un descuento del 10% "
		totalDescuento1 = (total/100) * 10
		total1 = total - totalDescuento1
		Escribir "Se ahorro: " totalDescuento1 " cordobas "
		Escribir "Su total a pagar con el descuento del 10% es de: " total1 " cordobas"
	FinSi
	si (canNiños = 3 ) Entonces
		escribir "Como tiene dos niños activos en el colegio se le puede dar un descuento del 15% "
		totalDescuento2 = (total/100) * 15
		total2 = total - totalDescuento2
		Escribir "Se ahorro " totalDescuento2 " cordobas "
		Escribir "Su total a pagar con el descuento del 15% es de: " total2 " cordobas"
	FinSi
	si (canNiños >= 4 ) Entonces
		escribir "Como tiene dos niños activos en el colegio se le puede dar un descuento del 20% "
		totalDescuento3 = (total/100) * 20
		total3 = total - totalDescuento3
		Escribir "Se ahorro " totalDescuento3 " cordobas"
		Escribir "Su total a pagar con el descuento del 20% es de:" total3 " cordobas"
	fin si
	
FinAlgoritmo
