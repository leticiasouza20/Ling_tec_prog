#include <stdio.h>
#include <math.h>

// FUNÇÃO DO EXERCÍCIO 6 - INSS
float calcularINSS(float salario) {

    float valor;

    if (salario <= 1412.00) {
        valor = (7.5 / 100) * salario;
    }
    else if (salario <= 2666.68) {
        valor = (9.0 / 100) * salario;
    }
    else if (salario <= 4000.03) {
        valor = (12.0 / 100) * salario;
    }
    else {
        valor = (14.0 / 100) * salario;
    }

    return valor;
}

// FUNÇÃO DO EXERCÍCIO 7 - IRPF
float calcularIRPF(float irpf) {

    float valor;

    if (irpf <= 2259.20) {
        valor = 0.00;
    }
    else if (irpf <= 2826.65) {
        valor = (irpf * (7.5 / 100)) - 169.44;
    }
    else if (irpf <= 3751.05) {
        valor = (irpf * (15.0 / 100)) - 381.44;
    }
    else if (irpf <= 4664.68) {
        valor = (irpf * (22.5 / 100)) - 662.77;
    }
    else {
        valor = (irpf * (27.5 / 100)) - 896.00;
    }

    return valor;
}


int main(int argc, char *argv[]) {

    int opcao;

    printf("\n========== MENU ==========\n");
    printf("1 - Exercício 1\n");
    printf("2 - Exercício 2\n");
    printf("3 - Exercício 3\n");
    printf("4 - Exercício 4\n");
    printf("5 - Exercício 5\n");
    printf("6 - Exercício 6\n");
    printf("7 - Exercício 7\n");
    printf("8 - Exercício 8\n");

    printf("Escolha o exercício: ");
    scanf("%d", &opcao);


    switch (opcao) {

        // EXERCÍCIO 1 - CPF
        case 1: {

            int cpf[11], soma, resto, digito1, digito2;

            printf("Digite o CPF (somente numeros): ");
            scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
                  &cpf[0], &cpf[1], &cpf[2], &cpf[3], &cpf[4],
                  &cpf[5], &cpf[6], &cpf[7], &cpf[8], &cpf[9], &cpf[10]);

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
            }
            else {
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
            }
            else {
                digito2 = resto;
            }

            // VERIFICAR CPF

            if (cpf[9] == digito1 && cpf[10] == digito2) {
                printf("\nCPF VALIDO!");
            }
            else {
                printf("\nCPF INVALIDO!");
            }

            break;
        }


        // EXERCÍCIO 2 - TEMPERATURA
        case 2: {

            double c, f;

            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &c);

            f = (c * 9.0 / 5.0) + 32;

            printf("A temperatura em Fahrenheit = %.2lf °F\n", f);

            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &f);

            c = (f - 32) * 5.0 / 9.0;

            printf("A temperatura em Celsius = %.2lf °C\n", c);

            break;
        }


        // EXERCÍCIO 3 - MÉDIA DO ALUNO
        case 3: {

            char nome[50];
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

            break;
        }


        // EXERCÍCIO 4 - SAQUE
        case 4: {

            int valor, n100, n50, n10, n5, n2, n1;

            printf("Digite o valor do saque: R$ ");
            scanf("%d", &valor);

            n100 = valor / 100;
            valor = valor % 100;

            n50 = valor / 50;
            valor = valor % 50;

            n10 = valor / 10;
            valor = valor % 10;

            n5 = valor / 5;
            valor = valor % 5;

            n2 = valor / 2;
            valor = valor % 2;

            n1 = valor / 1;
            valor = valor % 1;

            printf("\n RESUMO DO SAQUE \n");
            printf("Notas de R$ 100: %d\n", n100);
            printf("Notas de R$ 50:  %d\n", n50);
            printf("Notas de R$ 10:  %d\n", n10);
            printf("Notas de R$ 5:   %d\n", n5);
            printf("Notas de R$ 2:   %d\n", n2);
            printf("Notas de R$ 1:   %d\n", n1);

            break;
        }


        // EXERCÍCIO 5 - PROJÉTIL
        case 5: {

            float v0, angulo, alcance, tempo;
            float rad, vx, vy, x, y, t;

            float g = 9.8;
            float k = 0.5;
            float pi = 3.14;

            printf("Velocidade Inicial? ");
            scanf("%f", &v0);

            printf("Angulo? ");
            scanf("%f", &angulo);

            rad = angulo * (pi / 180);

            vx = v0 * cos(rad);
            vy = v0 * sin(rad);

            t = 0;
            y = 0;

            while (y >= 0) {

                t = t + 0.01;

                x = (vx / k) * (1 - exp(-k * t));

                y = (vy / k) * (1 - exp(-k * t))
                    - (g / k) * t
                    + (g / (k * k)) * (1 - exp(-k * t));
            }

            alcance = x;
            tempo = t;

            printf("\nAlcance Maximo: %.2f metros\n", alcance);
            printf("Tempo de Voo: %.2f segundos\n", tempo);

            break;
        }


        // EXERCÍCIO 6 - INSS
        case 6: {

            float salario, desconto;

            printf("Valor do salario bruto? ");
            scanf("%f", &salario);

            desconto = calcularINSS(salario);

            printf("Desconto do INSS: %.2f\n", desconto);

            break;
        }


        // EXERCÍCIO 7 - IRPF
        case 7: {

            float salario, desconto;

            printf("Valor do salário base? ");
            scanf("%f", &salario);

            desconto = calcularIRPF(salario);

            printf("Desconto do IRPF: %.2f\n", desconto);

            break;
        }


        // EXERCÍCIO 8 - FOLHA DE PAGAMENTO
        case 8: {

            float valor_hora, horas;
            float salario_bruto, inss, irpf, salario_liquido;

            printf("Valor da hora trabalhada? ");
            scanf("%f", &valor_hora);

            printf("Quantidade de horas no mês? ");
            scanf("%f", &horas);

            salario_bruto = valor_hora * horas;

            inss = calcularINSS(salario_bruto);

            irpf = calcularIRPF(salario_bruto);

            salario_liquido = salario_bruto - inss - irpf;

            printf("\n========================================\n");
            printf("          CONTRA-CHEQUE\n");
            printf("========================================\n");
            printf("Salário Bruto:       R$ %.2f\n", salario_bruto);
            printf("Desconto INSS:       R$ %.2f\n", inss);
            printf("Desconto IRPF:       R$ %.2f\n", irpf);
            printf("----------------------------------------\n");
            printf("Salário Líquido:     R$ %.2f\n", salario_liquido);
            printf("========================================\n");

            break;
        }
    }

    return 0;
}
