//Servando Negrete Idrogo 
#include <stdio.h>

int main()
{//inicio

	char nombre[30];
	int zona;
	float pago, kw;

	printf("Ingresar su nombre: ");
	scanf("%s", &nombre);
	printf("Costo del consumo de Kw\n");
	printf("- - - - - - - - - - - -\n");
	printf("1.- Monterrey $.85\n");
	printf("2.- San Pedro $.90\n");
	printf("3.- San Nicolas $.87\n");
	printf("4.- Guadalupe $.82\n");
	printf("- - - - - - - - - - - -\n");
	printf("Ingresar su zona: ");
	scanf("%i", &zona);
	printf("Ingresar su kw: ");
	scanf("%f", &kw);

	switch (zona)
	{
		case 1:
			pago = kw * .85;
			break;
		case 2:
			pago = kw * .90;
			break;
		case 3:
			pago = kw * .87;
			break;
		case 4:
			pago = kw * .82;
			break;
		default:
			pago = 0.0;
			break;
	}

	printf("\nNombre: %s", nombre);
	printf("\nPago: %.2f", pago);
}//fin

