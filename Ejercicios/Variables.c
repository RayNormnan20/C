#include <stdio.h>

int main()
{	
	//Char
	char C = 'y'; 			// Tamaño de 1 byte 0...255
	printf("%c\n",C);
	int a = 20; 			// 2 bytes -32768 ...32767
	printf("%i\n",a);
	short e = -1; 			// 2 bytes -128...127
	printf("%i\n",e);
	unsigned int u = 25; 	// 2 bytes 0..65535
	printf("%i\n",u);
	long l = 5953;			// 4 bytes
	printf("%li\n",l);
	float f = 72.5352; 
	printf("%.2f\n",f);
	double d = 12345.45654;	// 4bytes
	printf("%.2lf\n",d);
	return 0;
}
