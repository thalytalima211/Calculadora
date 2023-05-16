#include<stdio.h>
#include<locale.h>
#include<math.h>

float num1, num2, resultado;
int operacao;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("INICIANDO CALCULADORA...\n");
	while(true){
		printf("Menu de operações:\n");
		printf("1 - Adição\n");
		printf("2 - Subtração\n");
		printf("3 - Multiplicação\n");
		printf("4 - Divisão\n");
		printf("5 - Raiz quadrada\n");
		printf("6- Potenciação\n");
		printf("Escolha uma operação: ");
		scanf("%d", &operacao);
		
		switch(operacao){
			case 1:
				printf("Digite o 1º número: ");
				scanf("%f", &num1);
				printf("Digite o 2º número: ");
				scanf("%f", &num2);
				resultado = num1 + num2;
				printf("Resultado: %.2f\n", resultado);
				break;
			case 2:
				printf("Digite o 1º número: ");
				scanf("%f", &num1);
				printf("Digite o 2º número: ");
				scanf("%f", &num2);
				resultado = num1 - num2;
				printf("Resultado: %.2f\n", resultado);
				break;
			case 3:
				printf("Digite o 1º número: ");
				scanf("%f", &num1);
				printf("Digite o 2º número: ");
				scanf("%f", &num2);
				resultado = num1 * num2;
				printf("Resultado: %.2f\n", resultado);
				break;
			case 4:
				printf("Digite o 1º número: ");
				scanf("%f", &num1);
				printf("Digite o 2º número: ");
				scanf("%f", &num2);
				if(num2==0) printf("A divisão por 0 não é possível\n");
				else{
					resultado = num1 / num2;
					printf("Resultado: %.2f\n", resultado);
				}
				break;
			case 5:
				printf("Digite um número: ");
				scanf("%f", &num1);
				resultado = sqrt(num1);
				printf("Resultado: %.2f\n", resultado);
				break;
			case 6:
				printf("Digite a base: ");
				scanf("%f", &num1);
				printf("Digite o expoente: ");
				scanf("%f", &num2);
				resultado = pow(num1, num2);
				printf("Resultado: %.2f\n", resultado);
				break;
			default:
				printf("Operação inválida!\n");
				break;
		}
		printf("Deseja fazer mais alguma operação? (1 - SIM)(2 - NÂO)\n");
		printf("Digite uma opção: ");
		scanf("%d",&operacao);
		if(operacao == 1) continue;
		else if (operacao == 2) break;
		else{
			printf("Opção inválida! Encerrando calculadora...");
			break;
		}
	}
	printf("Obrigada por utilizar a calculadora! <3");
	return 0;
}
