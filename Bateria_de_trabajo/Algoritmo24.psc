Algoritmo Algoritmo24
	//Algoritmo que nos calcule las raíces de una ecuación de segundo grado.
	//Controlar el caso de que las soluciones sean imaginarias.
	definir a, b , c, nega, raizcua, total1, total2 Como Real
	Escribir "escibe el valor de a"
	Leer a
	Escribir "escibe el valor de b"
	Leer b
	Escribir "escibe el valor de c"
	Leer c
	nega = -b
	raizcua = (b^2 - 4 * a * c)^0.5
	Si raizcua <=0 Entonces
		Escribir "La ecuacion no se puede resolver"
	Sino
		total1 <-(nega+raizcua)/(2*a)
		total2<-(nega-raizcua)/(2*a)
		Escribir total1
		Escribir total2
	FinSi
FinAlgoritmo
