
// Programa que calcule el IVA de una compra, siendo el IVA del 19% sobre
// Valor total de la compra

#include "stdio.h"

float calcularIVA(float precio);

int	main(){
	float precioCompra, valorIVA;
	
	printf ("Ingrese el valor de la compra: ");
	scanf ("%f", &precioCompra);
	
	valorIVA = calcularIVA(precioCompra);
	
	printf("\nEl valor de la compra sin IVA es de: %.2f", precioCompra);
	printf("\nEl valor a pagar ( Incluido IVA ) es de : %.2f", (precioCompra + valorIVA));

	
}

float calcularIVA(float precio){
	
	float IVA;
	IVA = precio * 0.19; 
	return IVA; 
}
