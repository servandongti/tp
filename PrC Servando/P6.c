//Servando Negrete Idrogo 
#include <stdio.h>

int main()
{//inicio

	int numero1, numero2;

	printf("Ingresar un numero: ");
	scanf("%i", &numero1);

	printf("Ingresar otro numero: ");
	scanf("%i", &numero2);

	if (numero1 > numero2) {
		printf("%i es el numero mayor", numero1);
	}
	else if (numero2 > numero1) {
		printf("%i es el numero mayor", numero2);
	}
	else {
		printf("Error");
	}
}//fin

