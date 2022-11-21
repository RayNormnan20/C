
#include <stdio.h>

float calcularNota (float n1, float n2, float n3, float n4);

int main (){
	
	float nota1, nota2, nota3, nota4, notaFinal;
	
	printf("Ingrese la 1ra nota: ");
	scanf("%f", &nota1);
	printf("Ingrese la 2da nota: ");
	scanf("%f", &nota2);
	printf("Ingrese la 3ra nota: ");
	scanf("%f", &nota3);
	printf("Ingrese la 4ta nota: ");
	scanf("%f", &nota4);
	
	notaFinal = calcularNota(nota1, nota2, nota3, nota4);
	printf("\nLa nota final final del estudiante es: %.2f", notaFinal);
}


float calcularNota(float n1, float n2, float n3, float n4){
	return n1 * 0.04 + n2 * 0.12 + n3 * 0.24 + n4 * 0.6;
}




