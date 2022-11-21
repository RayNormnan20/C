///Programa que valida la contraseña especificada por el usuario 
//Tiene 8 caracteres 
//Min una letra mayuscula
//Min un numero

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comprobarContrasenia (char p[100]);

int main (){
	
	char password [100];
	int comprobacion;
	
	printf("Ingrese una contraseña: ");
	gets(password);
	
	comprobacion = comprobarContrasenia(password);
	
	if (comprobacion){
		printf("\nLa contraseña ingresada es segura.");
	}else{
		printf("\nLa contraseña ingresada no es segura.");
	}
}

int comprobarContrasenia (char p[100]){
	
	int largo = 0;
	int mayus = 0;
	int numer = 0;
	
	if (strlen(p) > 8){
		largo = 1;
	}
	
	int i;
	
	for(i = 0; i < strlen(p); i++ ){
		
		if(p[i] >= 'A' && p[i] <= 'Z'){
			mayus = 1;
		}
		
		if (p[i] >= '0' && p[i] <= '9'){
			numer = 1;
		}
	}
	
	if (largo  && mayus  && numer ){
		return 1; 
	}else{
		return 0;
	}
}

