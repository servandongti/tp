//Servando Negrete Idrogo 
#include <stdio.h>
#include <string.h>

int main()
{//inicio
	
	char stzona[30];
	int zona;
	float tarifa, km, pago; 
	
	printf("Buen d�a");
	printf("\nLas zonas son estas y este es su precio ");
	printf("\n1.- Monterrey $7.50");
	printf("\n2.- San Pedro $16.30");
	printf("\n3.- San Nicolas $8.20");
	printf("\nA donde lo llevo: ");
	scanf("%i", &zona);
	printf("Cuantos kilometros son: ");
	scanf("%f", &km);
	
	if (zona == 1) {
		tarifa = 7.50;
		strcpy(stzona, "Monterrey");
	}
	else if (zona == 2) {
		tarifa = 16.30;
		strcpy(stzona, "San Pedro");
	}
	else if (zona == 3) {
		tarifa = 8.20;
		strcpy(stzona, "San Nicolas");
	}
	else {
		printf("No ofrecemos ese servicio joven.");
		return 0;
	}
	
	if (km <= 10) {
		pago = 40.00;
	}
	else {
		pago = 40.00 + ((km - 10) * tarifa); 
	}
	
	printf("- - - - - - - - - - -");
	printf("\nJoven, su viaje a %s", stzona);
	printf("\nEn total son %.1fkm", km);
	printf("\nEn total va a pagar: $%.2f pesos.", pago);
}//fin

