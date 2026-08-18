----------------------------------------------------- Único código ------------------------------------------------------------------
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // EXERCÍCIO 1
    int num1, num2;

    printf("Insira número 1: ");
    scanf("%d", &num1);

    printf("Insira número 2: ");
    scanf("%d", &num2);

    printf("Os números são: %d e %d\n", num2, num1);


    // EXERCÍCIO 2
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


    // EXERCÍCIO 3
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


    // EXERCÍCIO 4
    double salario, vendas, total;

    printf("\nDigite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o valor total em vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);


    // EXERCÍCIO 5
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


    // EXERCÍCIO 6
    int idade, anos, meses, dias;

    printf("\nDigite a idade em dias: ");
    scanf("%d", &idade);

    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);


    // EXERCÍCIO 7
    double raio, volume;
    double pi = 3.14159;

    printf("\nDigite o raio: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * pow(raio, 3);

    printf("Volume = %.3lf\n", volume);


    // EXERCÍCIO 8
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

    return 0;
}
-------------------------------------------------- Código Separado ------------------------------------------------------------------
1)
#include <stdio.h>
int main(int argc, char *argv[]) {

    int num1, num2;
    
    printf("Insira número 1: ");
    scanf("%d", &num1);                   //& endereço comercial, a base da variável

    printf("Insira número 2: ");
    scanf("%d", &num2);

    printf("Os números são: %d e %d\n", num2, num1);

    return 0;
}

2)
#include <stdio.h>
int main(int argc, char *argv[]) {

    double valor;
    int n = 0;
    
    printf("Digite um valor: ");
    scanf("%lf", &valor);

    while (valor >= 10) {
        valor = valor / 10;
        n = n + 1;
    }
    while (valor < 1) {
        valor = valor * 10;
        n = n - 1;
    }

    printf("%.4lf x 10^%d\n", valor, n);
    return 0;
}

3)  
#include <stdio.h>
int main(int argc, char *argv[]) {
    
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Em binario: ");
    printf("%d", n / 64);  // divide o n por 64
    printf("%d", (n % 64) / 32);  // pega o resto de divisão de n/64 e divide por 32
    printf("%d", (n % 32) / 16); // mesma lógica
    printf("%d", (n % 16) / 8);
    printf("%d", (n % 8) / 4);
    printf("%d", (n % 4) / 2);
    printf("%d\n", n % 2);

    return 0;
}

4) 
#include <stdio.h>
int main(int argc, char *argv[]) {

    double salario, vendas, total;
    
    printf("Digite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o valor total em vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);  //mostra o double com duas casas decimaais

    return 0;
}

5)
#include <stdio.h>
int main(int argc, char *argv[]) {

    double a, b, c, d;   //usuário digitar
    double soma, media, produto;  //guardar resultados
    
    printf("Digite o primeiro valor: ");
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

    return 0;
}


6)
#include <stdio.h>
int main(int argc, char *argv[]) {

    int idade, anos, meses, dias;
    
    printf("Digite a idade em dias: ");
    scanf("%d", &idade);

    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}

7)
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
    
    double raio, volume;
    double pi = 3.14159;
    
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * pow(raio, 3);  // pow(número, potência)

    printf("Volume = %.3lf \n", volume);

    return 0;
}

8)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    int x1, y1, x2, y2;
    float dist, cat1, cat2;

    printf("Entre com os valores para p1 (x1,y1):\n");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Entre com os valores para p2 (x2,y2):\n");
    scanf("%d", &x2);
    scanf("%d", &y2);

    cat1 = pow((x2 - x1), 2);
    cat2 = pow((y2 - y1), 2);

    dist = sqrt(cat1 + cat2);

    printf("Distancia: %f\n", dist);

    return 0;
}
