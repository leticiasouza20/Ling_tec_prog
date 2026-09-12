// EXERCÍCIO 1
#include <stdio.h>

int main() {

    int cpf[11], soma, resto, digito1, digito2;

    printf("Digite o CPF (somente numeros): ");
    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &cpf[0], &cpf[1], &cpf[2], &cpf[3], &cpf[4], &cpf[5], &cpf[6], &cpf[7], &cpf[8], &cpf[9], &cpf[10]);

    //PRIMEIRO DIGITO
    soma = cpf[0] * 10;
    soma = soma + cpf[1] * 9;
    soma = soma + cpf[2] * 8;
    soma = soma + cpf[3] * 7;
    soma = soma + cpf[4] * 6;
    soma = soma + cpf[5] * 5;
    soma = soma + cpf[6] * 4;
    soma = soma + cpf[7] * 3;
    soma = soma + cpf[8] * 2;

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito1 = 0;
    } else {
        digito1 = resto;
    }

    // SEGUNDO DIGITO
    soma = cpf[0] * 11;
    soma = soma + cpf[1] * 10;
    soma = soma + cpf[2] * 9;
    soma = soma + cpf[3] * 8;
    soma = soma + cpf[4] * 7;
    soma = soma + cpf[5] * 6;
    soma = soma + cpf[6] * 5;
    soma = soma + cpf[7] * 4;
    soma = soma + cpf[8] * 3;
    soma = soma + digito1 * 2;

    resto = (soma * 10) % 11;

    if (resto == 10) {
        digito2 = 0;
    } else {
        digito2 = resto;
    }

    // VERIFICAR CPF

    if (cpf[9] == digito1 && cpf[10] == digito2) {
        printf("\nCPF VALIDO!");
    } else {
        printf("\nCPF INVALIDO!");
    }
    return 0;
}

// EXERCÍCIO 2
#include <stdio.h>
int main(int argc, char *argv[]) {

    double c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &c);

    f = (c * 9/5) + 32;
    printf("A temperatura em Fahrenheit = %.2lf °F\n", f);

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &f);
  
    c = (f - 32) * 5/9;
    printf("A temperatura em  Celsius = %.2lf °C\n", c);
  
    return 0;
}

// EXERCÍCIO 3
#include <stdio.h>

int main(int argc, char *argv[]) {

    char nome;
    double n1, n2, n3, media, soma;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    printf("Digite a terceira nota: ");
    scanf("%lf", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("\nAluno: %s", nome);
    printf("\nMedia: %.2lf\n", media);

    if (media >= 7) {
        printf("APROVADO(A)!");
    }
    else if (media >= 4) {

        soma = 10 - media;

        printf("EXAME!");
        printf("\nFalta %.2lf pontos para chegar a 10.", soma);
    }
    else {
        printf("REPROVADO(A)!");
    }

    return 0;
}
      
  
