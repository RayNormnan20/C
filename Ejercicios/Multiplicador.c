/// Programa que calcua la tabla de multiplicar de cualquier número entero dado por el usuario

#include <stdio.h>

void tablaMultiplicar (int n1, int n2);
int main (void ){
	
	int n, i;
	
	printf ("Ingrese un numero entero: ");
	scanf("%d", &n);
	
	printf("\nTabla del %d\n", n);
	 
	for (i = 0; i <= 12; i++){
		
		tablaMultiplicar (n, i);
	}
}

void tablaMultiplicar (int n1, int n2){
	
	printf("\n%d x %d = %d", n1, n2, n1 * n2);
}

