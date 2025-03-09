#include<stdio.h>

int main(){
	int num, i;

	//Aqui se pide un numero al usuario
	printf("Ingresa el numero para ver su tabla: ");
	scanf("%d", &num);
        
	//En esta parte del codigo se calcula la tabla de multiplicar
	printf("Tabla de multiplicar del %d:\n", num);
	for (i = 1; i <= 10; i++ ) {
		printf("%d x %d = %d\n",num, i, num * i);
	
	}
	return 0;
}
