#include <stdio.h>
#include <math.h>
#include <stdlib.h>


// FUNÇÃO DO EXERCÍCIO 1
void exercicio1() {
    int num1, num2;

    printf("Insira numero 1: ");
    scanf("%d", &num1);

    printf("Insira numero 2: ");
    scanf("%d", &num2);

    printf("Os numeros sao: %d e %d\n", num2, num1);
}


// FUNÇÃO DO EXERCÍCIO 2
void exercicio2() {
    double valor;
    int expoente = 0;

    printf("\nDigite um valor: ");
    scanf("%lf", &valor);

    while (valor >= 10) {
        valor = valor / 10;
        expoente = expoente + 1;
    }

    while (valor < 1) {
        valor = valor * 10;
        expoente = expoente - 1;
    }

    printf("%.4lf x 10^%d\n", valor, expoente);
}


// FUNÇÃO DO EXERCÍCIO 3
void exercicio3() {
    int numeroBinario;

    printf("\nDigite um numero: ");
    scanf("%d", &numeroBinario);

    printf("Em binario: ");

    printf("%d", numeroBinario / 64);
    printf("%d", (numeroBinario % 64) / 32);
    printf("%d", (numeroBinario % 32) / 16);
    printf("%d", (numeroBinario % 16) / 8);
    printf("%d", (numeroBinario % 8) / 4);
    printf("%d", (numeroBinario % 4) / 2);
    printf("%d\n", numeroBinario % 2);
}


// FUNÇÃO DO EXERCÍCIO 4
void exercicio4() {
    double salario, vendas, total;

    printf("\nDigite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o valor total em vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);
}


// FUNÇÃO DO EXERCÍCIO 5
void exercicio5() {
    double a, b, c, d;
    double soma, media, produto;

    printf("\nDigite o primeiro valor: ");
    scanf("%lf", &a);

    printf("Digite o segundo valor: ");
    scanf("%lf", &b);

    printf("Digite o terceiro valor: ");
    scanf("%lf", &c);

    printf("Digite o quarto valor: ");
    scanf("%lf", &d);

    soma = a + b + c + d;
    media = soma / 4;
    produto = a * b * c * d;

    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);
    printf("Produto = %.2lf\n", produto);
}


// FUNÇÃO DO EXERCÍCIO 6
void exercicio6() {
    int idade, anos, meses, dias;

    printf("\nDigite a idade em dias: ");
    scanf("%d", &idade);

    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}


// FUNÇÃO DO EXERCÍCIO 7
void exercicio7() {
    double raio, volume;
    double pi = 3.14159;

    printf("\nDigite o raio: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * pow(raio, 3);

    printf("Volume = %.3lf\n", volume);
}


// FUNÇÃO DO EXERCÍCIO 8
void exercicio8() {
    int x1, y1, x2, y2;
    float dist, cat1, cat2;

    printf("\nEntre com os valores para p1 (x1,y1):\n");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Entre com os valores para p2 (x2,y2):\n");
    scanf("%d", &x2);
    scanf("%d", &y2);

    cat1 = pow((x2 - x1), 2);
    cat2 = pow((y2 - y1), 2);

    dist = sqrt(cat1 + cat2);

    printf("Distancia: %f\n", dist);
}


int main(int argc, char *argv[]) {

    int opcao;

    printf("\n========== MENU ==========\n");
    printf("1 - Exercicio 1\n");
    printf("2 - Exercicio 2\n");
    printf("3 - Exercicio 3\n");
    printf("4 - Exercicio 4\n");
    printf("5 - Exercicio 5\n");
    printf("6 - Exercicio 6\n");
    printf("7 - Exercicio 7\n");
    printf("8 - Exercicio 8\n");
    printf("==========================\n");

    printf("Escolha o exercicio: ");
    scanf("%d", &opcao);


    switch (opcao) {

        case 1:
            exercicio1();
            break;

        case 2:
            exercicio2();
            break;

        case 3:
            exercicio3();
            break;

        case 4:
            exercicio4();
            break;

        case 5:
            exercicio5();
            break;

        case 6:
            exercicio6();
            break;

        case 7:
            exercicio7();
            break;

        case 8:
            exercicio8();
            break;

        default:
            printf("Exercicio invalido!\n");
    }

    return 0;
}
