1)
int main(int argc, char *argv[]) {
#include <stdio.h>
  int idade, ano_atual, calculo;

printf("Insira a sua idade: ");
    scanf("%d", &idade);                   //& endereço comercial, a base da variável

    printf("Insira o ano atual: ");
    scanf("%d", &ano_atual);

        calculo = ano_atual - idade;
        printf("O ano do nascimento: = %.4d \n", calculo);

    return 0;
}

2)
  int main(int argc, char *argv[]) {
  #include <stdio.h>
  double k, m;
     printf("Insira a velocidade em Km/h: ");
     scanf("%lf", &k); 

      m = k/3.6;
      printf("A velocidade em m/s: = %.4lf \n", m);
      return 0;
}

3) 
  int main(int argc, char *argv[]) {
  #include <stdio.h>

    double reais, dolar, calculo;

    printf("Digite o valor em reais: ");
    scanf("%lf", &reais);

    dolar = reais * 5.22;

    printf("o valor em dólar é = R$ %.2lf\n", dolar);  //mostra o double com duas casas decimaais

    return 0;
}

4)
  int main(int argc, char *argv[]) {
  #include <stdio.h>

    double c, f;

    printf("Digite a temperatura em °C: ");
    scanf("%lf", &c);

    f = (c* 9/5)+32;

    printf("A temperatura em Fahrenheit = %.lf °f \n", f);  //mostra o double com duas casas decimaais

    return 0;
}

5) 
  int main(int argc, char *argv[]) {
  #include <stdio.h>

    double g,r ;
    int pi =3.141592

    printf("Digite o ângulo em graus: ");
    scanf("%lf", &g);

    r = r-(g*pi)/180);

    printf("Em radianos é = %.lf °r \n", r);  //mostra o double com duas casas decimaais

    return 0;
}





  


