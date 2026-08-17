1)
#include <stdio.h>
int main(int argc, char *argv[]) {

    int idade, ano_atual, calculo;

    printf("Insira a sua idade: ");
    scanf("%d", &idade);  // endereço da variavel

    printf("Insira o ano atual: ");
    scanf("%d", &ano_atual);

    calculo = ano_atual - idade;

    printf("O ano de nascimento = %.4d\n", calculo);

    return 0;
}

2)
#include <stdio.h>
int main(int argc, char *argv[]) {

    double k, m;
    printf("Insira a velocidade em Km/h: ");
    scanf("%lf", &k);

    m = k / 3.6;

    printf("A velocidade em m/s = %.4lf\n", m);

    return 0;
}

3)  
#include <stdio.h>
int main(int argc, char *argv[]) {

    double reais, dolar;
    printf("Digite o valor em reais: ");
    scanf("%lf", &reais);

    dolar = reais / 5.22;

    printf("O valor em dólar é = US$ %.2lf\n", dolar);

    return 0;
}

4)  
#include <stdio.h>
int main(int argc, char *argv[]) {

    double c, f;
    printf("Digite a temperatura em °C: ");
    scanf("%lf", &c);

    f = (c * 9.0 / 5.0) + 32;

    printf("A temperatura em Fahrenheit = %.2lf °F\n", f);

    return 0;
}

5)  
#include <stdio.h>
int main(int argc, char *argv[]) {

    double g, r;
    double pi = 3.141592;
    printf("Digite o ângulo em graus: ");
    scanf("%lf", &g);

    r = (g * pi) / 180;

    printf("Em radianos é = %.2lf\n", r);

    return 0;
}

6)
#include <stdio.h>
int main(int argc, char *argv[]) {

    int num, ant, suc;
    printf("Digite o número: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("O antecessor = %d\n", ant);
    printf("O sucessor = %d\n", suc);

    return 0;
}

7)

#include <stdio.h>

int main(int argc, char *argv[]) {

    double g1, g2, g3;
    double valor = 780000.00; //não pode ter mais de um ponto
  
    g1 = valor * 0.46;
    g2 = valor * 0.32;
    g3 = valor - g1 - g2;

    printf("O valor do primeiro ganhador = %.2lf\n", g1);
    printf("O valor do segundo ganhador = %.2lf\n", g2);
    printf("O valor do terceiro ganhador = %.2lf\n", g3);

    return 0;
}

8) 

#include <stdio.h>
int main(int argc, char *argv[]) {
  
    int tempo, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}

9) 
#include <stdio.h>
int main(int argc, char *argv[]) {

    double tempo, velocidade, distancia, litros;
    printf("Digite o tempo da viagem em horas: ");
    scanf("%lf", &tempo);

    printf("Digite a velocidade media em km/h: ");
    scanf("%lf", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Litros gastos = %.3lf\n", litros);

    return 0;
}

10) 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

    int a, b, c, maiorAB, maior;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    maiorAB = (a + b + abs(a - b)) / 2;

    maior = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maior);

    return 0;
}
