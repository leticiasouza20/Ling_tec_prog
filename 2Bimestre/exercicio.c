	//Exercicio 1;
	/*Elabore um programa que permita a entrada de 3 valores. 
	E conte do primeiro valor inserido, até o segundo valor, com o
	passo da contagem dado pelo terceiro valor  */
	//ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.
  #include <stdio.h>

int main() {
    int inicio, fim, passo, i;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor final: ");
    scanf("%d", &fim);

    printf("Digite o passo da contagem: ");
    scanf("%d", &passo);

    if (passo <= 0) {
        printf("O passo deve ser maior que zero.\n");
    } else {
        for (i = inicio; i <= fim; i = i + passo) {
            printf("%d ", i);
        }
    }
    
	
	// Exercicio 2;
	/* Faça um programa que recaba um nuumero n e realize a soma dos
	n primeiros termos da sequência definda como: 
	[S = 1/2; 1/4; 1/8 1/16... N] */

  #include <stdio.h>

int main() {
    int n, i;
    float termo, soma;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    termo = 0.5;
    soma = 0;

    for (i = 1; i <= n; i++) {
        soma = soma + termo;
        termo = termo / 2;
    }

    printf("A soma dos termos e: %.4f\n", soma);

    return 0;
}

	// Exercicio 3;
	/*Crie um programa qe exiba na tela, o trîangulo de pascal. */
  #include <stdio.h>

int main() {
    int linhas, i, j, numero;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    for (i = 0; i < linhas; i++) {
        numero = 1;

        for (j = 0; j <= i; j++) {
            printf("%d ", numero);
            numero = numero * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
