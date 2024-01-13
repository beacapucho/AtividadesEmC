#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int numero;
	printf ("Digite o número: \n");
	scanf ("%d", &numero);
	if (numero % 3 == 0)
	   printf ("O numero é divisivel por 3. \n");
	if (numero % 7 == 0)
	   printf ("O numero é divisivel por 7. \n");
	return 0;
}