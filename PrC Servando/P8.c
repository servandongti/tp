//Servando Negrete Idrogo  
#include <stdio.h>

int main()
{//inicio

	char letra;

	printf("Ingresar una vocal:");
	scanf("%c", &letra);

	switch(letra) {
		case 'A':
			printf("Vocal mayuscula");
			break;
		case 'E':
			printf("Vocal mayuscula");
			break;
		case 'I':
			printf("Vocal mayuscula");
			break;
		case 'O':
			printf("Vocal mayuscula");
			break;
		case 'U':
			printf("Vocal mayuscula");
			break;
		case 'a':
			printf("Vocal minuscula");
			break;
		case 'e':
			printf("Vocal minuscula");
			break;
		case 'i':
			printf("Vocal minuscula");
			break;
		case 'o':
			printf("Vocal minuscula");
			break;
		case 'u':
			printf("Vocal minuscula");
			break;
		default:
			printf("No es una vocal");
			break;
	}
}//fin

