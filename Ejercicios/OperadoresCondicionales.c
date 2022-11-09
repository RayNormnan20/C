
#include <stdio.h>

main()
{
	int edad;
	printf("Ingresa tu edad \n");
	scanf("%d",&edad);
	
	if(edad >= 18)
	{
		printf("Eres mayor de edad\n");
	}
	else if(edad == 17)
	{
		printf("Lo siento pulpin, pero todavia no eres mayor de edad\n");
	}	
	else{
		printf("Eres menor de edad, aprovecha todo mientras puedas \n");
	}
	return 0;
}
