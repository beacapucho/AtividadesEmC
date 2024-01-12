#include <stdio.h>
#include <stdlib.h>



int main() {
	int idade,ano;
	float altura;
	char nome[30];
	
	printf ("Digite o seu nome");
	scanf ("%s", nome);
	printf ("Digite sua idade");
	scanf ("%d", &idade);
	printf ("Digite a altura:");
	scanf ("%f", &altura);
	ano = 2024- idade;
	printf ("\nO nome e: %s", nome);
	printf ("\nA altura e: %f", altura);
	printf ("\nA idade e: %d", idade);
	printf ("\nO ano de nascimento e: %d", ano);
	
	return 0;
}