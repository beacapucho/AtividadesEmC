#include <stdio.h>
#include <stdlib.h>


int main() {
	int cargo;
	float salario, aumento, salariofinal;
	printf ("Digite o numero do cargo do funcionario:\n1 - Servente\n2 - Pedreiro\n3 - Mestre de obras\n4 - Tecnico De Seguranca\n");
	scanf("%d", &cargo);
	printf ("Digite o valor do salario do funcionario:\n");
	scanf ("%f", &salario);
	
	switch (cargo){
		case 1:
			aumento = salario * 0.4;
			salariofinal = salario + aumento;
			printf ("O Servente teve aumento de R$%.2f e agora recebe R$%.2f\n", aumento, salariofinal);
			break;
			case 2:
			aumento = salario * 0.35;
			salariofinal = salario + aumento;
			printf ("O Pedreiro teve aumento de R$%.2f e agora recebe R$%.2f\n", aumento, salariofinal);
			break;
			case 3:
			aumento = salario * 0.20;
			salariofinal = salario + aumento;
			printf ("O Mestre de Obras teve aumento de R$%.2f e agora recebe R$%.2f\n", aumento, salariofinal);
			break;
			case 4:
			aumento = salario * 0.10;
			salariofinal = salario + aumento;
			printf ("O Tecnico de Seguranca teve aumento de R$%.2f e agora recebe R$%.2f\n", aumento, salariofinal);
			break;
	}
	
	return 0;
}