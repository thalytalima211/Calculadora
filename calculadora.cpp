#include<stdio.h>
#include<locale.h>
#include<math.h>

float num1, num2, resultado;
int operacao;

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("INICIANDO CALCULADORA...\n");
	while(true){
		printf("Menu de opera��es:\n");
		printf("1 - Adi��o\n");
		printf("2 - Subtra��o\n");
		printf("3 - Multiplica��o\n");
		printf("4 - Divis�o\n");
		printf("5 - Raiz quadrada\n");
		printf("6- Potencia��o\n");
		printf("Escolha uma opera��o: ");
		scanf("%d", &operacao);
		
		switch(operacao){
			case 1:
				printf("Digite o 1� n�mero: ");
				scanf("%f", &num1);
				printf("Digite o 2� n�mero: ");
				scanf("%f", &num2);
				resultado = num1 + num2;
				printf("Resultado: %.2f\n", resultado);
				break;
			case 2:
				printf("Digite o 1� n�mero: ");
				scanf("%f", &num1);
				printf("Digite o 2� n�mero: ");
				scanf("%f", &num2);
				resultado = num1 - num2;
				printf("Resultado: %.2f\n", resultado);
				break;
			case 3:
				printf("Digite o 1� n�mero: ");
				scanf("%f", &num1);
				printf("Digite o 2� n�mero: ");
				scanf("%f", &num2);
				resultado = num1 * num2;
				printf("Resultado: %.2f\n", resultado);
				break;
			case 4:
				printf("Digite o 1� n�mero: ");
				scanf("%f", &num1);
				printf("Digite o 2� n�mero: ");
				scanf("%f", &num2);
				if(num2==0) printf("A divis�o por 0 n�o � poss�vel\n");
				else{
					resultado = num1 / num2;
					printf("Resultado: %.2f\n", resultado);
				}
				break;
			case 5:
				printf("Digite um n�mero: ");
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
				printf("Opera��o inv�lida!\n");
				break;
		}
		printf("Deseja fazer mais alguma opera��o? (1 - SIM)(2 - N�O)\n");
		printf("Digite uma op��o: ");
		scanf("%d",&operacao);
		if(operacao == 1) continue;
		else if (operacao == 2) break;
		else{
			printf("Op��o inv�lida! Encerrando calculadora...");
			break;
		}
	}
	printf("Obrigada por utilizar a calculadora! <3");
	return 0;
}
