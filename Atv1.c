#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL,"");
	int num, ant, suc;
	printf("Digite o número:");
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("\n O antecessor é: %d", ant);
	printf("\n O sucessor é: %d", suc);
	
	return (0);
		
}