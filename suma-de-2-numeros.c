#include <stdio.h>

int main() {
	float num1, num2,  suma;
	//aqui declaraos las varivles de numers y suma
	
	//aqui se pide al usuario introducir un numero 
	printf("Ingrese el primer numero: ");
	scanf("%f", &num1);

	//aqui se le pide al usario añadir otro numero
	printf("Ingrese el segund numero: ");
	scanf("%f", &num2);

	//en este momento se crea la funcinon para sumar los dos numeros
        suma = num1 + num2;
	
	//Mostamos el resultado
	printf("El resultado es %.5f y %.5f es : %.5f\n", num1, num2, suma);

	return 0;
}
