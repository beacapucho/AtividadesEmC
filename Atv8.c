#include <stdio.h>
#include <stdlib.h>


int main() {
	int num;
	int maior, menor, i;
	
	printf ("Digite o 1º numero: \n");
	scanf ("%d", &num);
	maior = num;
	menor = num;
	
	printf ("Digite o 2º numero: \n");
	scanf ("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf ("Digite o 3º numero: \n");
	scanf ("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf ("Digite o 4º numero: \n");
	scanf ("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf ("Digite o 5º numero: \n");
	scanf ("%d", &num);
	if (num > maior)
	maior = num;
	if (num < menor)
	menor = num;
	
	printf ("O maior é %d\n", maior);
	printf ("O menor é %d\n", menor);
	  
	return 0;
	
}