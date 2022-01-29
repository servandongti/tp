//Servando Negrete Idrogo 
#include <stdio.h>
#include <string.h>

int main() {//inicio
	
	char nombre[30];
	char pla[30];
	int platillo, numero;
	float pago;
	
	printf("Hola, sea bienvenido al restaurante, este es el menu:");
	printf("\n1-Cortadillo $35 pesos.");
	printf("\n2-Chiles Rellenos $40 pesos.");
	printf("\n3-Milanesa de Res $45 pesos.");
	printf("\n4-Milanesa de Pollo $42 pesos.");
	printf("\n-----------------------------\n");
	printf("\nCual es su nombre: ");
	scanf("%s", &nombre);
	printf("Cual platillo le gustaria: ");
	scanf("%i", &platillo);
	printf("Cuantas porciones quiere: ");
	scanf("%i", &numero);
	
	switch(platillo) {
		case 1:
			strcpy(pla, "Cortadillo");
			pago = 35.0 * numero;
			break;
		case 2:
			strcpy(pla, "Chiles Rellenos");
			pago = 40.0 * numero;
			break;
		case 3:
			strcpy(pla, "Milanesa de Res");
			pago = 45.0 * numero;
			break;
		case 4:
			strcpy(pla, "Milanesa de Pollo");
			pago = 42.0 * numero;
			break;
		default:
			strcpy(pla, "Error");
			pago = 0.0;
			break;
	}
	
	printf("\n------CUENTA------");
	printf("\n------------------");
	printf("\n------------------");
	printf("\nNombre:%s", nombre);
	printf("\nPlatillo:%s", pla);
	printf("\nCantidad:%i", numero);
	printf("\n------------------");
	printf("\n------------------");
	printf("\nTotal:$%.2f", pago);
}//fin

