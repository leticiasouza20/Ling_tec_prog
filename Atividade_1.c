1)
int main(int argc, char *argv[]) {
#include <stdio.h>

    int num1, num2;

    printf("Insira número 1: ");
    scanf("%d", &num1);

    printf("Insira número 2: ");
    scanf("%d", &num2);

    printf("Os números são: %d e %d\n", num2, num1);

    return 0;
}

2)
int main(int argc, char *argv[]) {
#include <stdio.h>

int main() {
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
int main(int argc, char *argv[]) {
#include <stdio.h>

int main() {

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
int main(int argc, char *argv[]) {
#include <stdio.h>

int main() {

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
int main(int argc, char *argv[]) {
#include <stdio.h>

int main() {

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
int main(int argc, char *argv[]) {
#include <stdio.h>

int main() {

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
int main(int argc, char *argv[]) {
#include <stdio.h>
#include <math.h>

int main() {

    double raio, volume;
    double pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * pow(raio, 3);  // pow(número, potência)

    printf("Volume = %.3lf \n", volume);

    return 0;
}

8)
int main(int argc, char *argv[]) {
#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1, x2, y2;
    double a, b, distancia;

    printf("Digite x1: ");
    scanf("%lf", &x1);

    printf("Digite y1: ");
    scanf("%lf", &y1);

    printf("Digite x2: ");
    scanf("%lf", &x2);

    printf("Digite y2: ");
    scanf("%lf", &y2);

    a = x2 - x1;
    b = y2 - y1;

    a = a * a;  // quadrado
    b = b * b;  // quadrado

    distancia = sqrt(a + b);  //raiz quadrada e a soma dos quadrados

    printf("Distancia = %.4lf \n", distancia);

    return 0;
}
