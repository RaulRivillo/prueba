#include<stdio.h>
#include<stdlib.h>

int main(){

    int lado;

    printf("Introduce lado: ");
    scanf(" %i", &lado);

    for (int fila = 0; fila<lado; fila ++){
	for (int cuadrado = 0; cuadrado<lado; cuadrado ++){
	    for (int col = 0; col<lado; col ++)
		if(cuadrado % 2 == 0)
		    if ( fila == col)
			printf("*");
		    else
			printf(" ");
		else

		    if (fila + col == lado - 1)
			printf("*");
		    else 
			printf(" ");

	}
	printf("\n");

    }
    return EXIT_SUCCESS;
}
