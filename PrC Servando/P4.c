//Servando Negrete Idrogo 
#include <stdio.h>
#include <string.h>

int main()
{//inicio
	
	char nombre[30];
	float pago, descuento, descuentodepago, pagofinal;
	
	printf("Cual es su nombre: ");
	scanf("%s", &nombre);
	
	printf("Cuanto es el monto a pagar: ");
	scanf("%f", &pago);
	
	if (pago < 1000.0) {
		descuento = 0.0;
	}
	else if (pago <= 1000.0 && pago > 3500.0) {
		descuento = .07;
	}
	else if (pago >= 3500.0) {
		descuento = .12;
	}
	else {
		descuento = 0.0;
	}
	
	descuentodepago = pago * descuento;
	pagofinal = pago - descuentodepago;
	
	printf("\n------RECIBO------");
	printf("\n\"Patito\" S.A. de C.V.");
	printf("\n------------------------");
	printf("\n\nNombre:%s", nombre);
	printf("\nCompra:$%.1f pesos.", pago);
	printf("\nDescuento:$%.1f pesos.", descuentodepago);
	printf("\n------------------------");
	printf("\nPago final:$%.2f pesos.", pagofinal);
}//fin

