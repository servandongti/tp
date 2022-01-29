//Servando Negrete Idrogo 
#include <stdio.h>

int main()
{//inicio

	int ngrande, numero1, numero2, numero3;

	printf("Favor de ingresar un numero: ");
	scanf("%i", &numero1);

	printf("Favor de ingresar otro numero: ");
	scanf("%i", &numero2);

	printf("Favor de ingresar otro numero: ");
	scanf("%i", &numero3);

	if (numero1 > numero2) {
		if (numero1 > 3) {
			ngrande = numero1;
		}
		else {
			ngrande = numero3;
		}
	}
	else {
		if (numero2 > numero3) {
			ngrande = numero2;
		}
		else {
			ngrande = numero3;
		}
	}

	printf("%i Es el numero mayor", ngrande);
}//fin

