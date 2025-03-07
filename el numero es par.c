#include <stdio.h>


int main(){
	int numero;

	//aqui solicito el numero al usuario
	printf("Teclea un numero: ");
	scanf("%d" , &numero);

	//Momento de verificar 
	if (numero % 2 == 0) {
		printf("El numero %d es par .\n", numero);
	} else {
		printf("El numero %d es impar .\n", numero);
	}


	return 0;
	      


}
