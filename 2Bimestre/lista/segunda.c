//1 
#include <stdio.h>

int main() {
    int numeros[100],i,j,aux;

    // Leitura dos 100 números
    for (i = 0; i < 100; i++) {
        printf("\nDigite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Impressão na ordem inversa de entrada
    printf("\nOrdem inversa:\n");
    for (i = 99; i >= 0; i--) {
        printf("\nNumero %d: %d", i+1,numeros[i]);
    }

    // Ordenação do maior para o menor
    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (numeros[i] < numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    // Impressão em ordem decrescente
    printf("\n\nOrdem decrescente:\n");
    for (i = 0; i < 100; i++) {
        printf("\n %d", numeros[i]);
    }

    printf("\n");
    return 0;
}

//2
#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    printf("%e\n", n);
    return 0;
}

//3
#include <stdio.h>

int main() {
    int n, bin[64], i = 0, j;

    scanf("%d", &n);

    while (n > 0) {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);

    printf("\n");
    return 0;
}

//4
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i, maior;

    scanf("%d", &maior);

    for (i = 1; i < 10; i++) {
        scanf("%d", &b);
        a = (maior + b + abs(maior - b)) / 2;
        maior = a;
    }

    printf("%d eh o maior\n", maior);
    return 0;
}

//5
#include <stdio.h>

int main() {
    int n[100], i, j, primo;

    for (i = 0; i < 100; i++)
        scanf("%d", &n[i]);

    for (i = 0; i < 100; i++) {
        if (n[i] % 2 == 0)
            printf("%d eh par\n", n[i]);
        else
            printf("%d eh impar\n", n[i]);

        primo = 1;

        if (n[i] < 2)
            primo = 0;

        for (j = 2; j < n[i]; j++) {
            if (n[i] % j == 0)
                primo = 0;
        }

        if (primo == 1)
            printf("%d eh primo\n", n[i]);
        else
            printf("%d nao eh primo\n", n[i]);
    }

    return 0;
}

// 6
#include <stdio.h>
#include <math.h>

int main() {
    double x1[10], y1[10], x2[10], y2[10];
    double d;
    int i;

    for (i = 0; i < 10; i++)
        scanf("%lf", &x1[i]);

    for (i = 0; i < 10; i++)
        scanf("%lf", &y1[i]);

    for (i = 0; i < 10; i++)
        scanf("%lf", &x2[i]);

    for (i = 0; i < 10; i++)
        scanf("%lf", &y2[i]);

    for (i = 0; i < 10; i++) {
        d = sqrt((x2[i] - x1[i]) * (x2[i] - x1[i]) +
                 (y2[i] - y1[i]) * (y2[i] - y1[i]));

        printf("%.2lf\n", d);
    }

    return 0;
}
//7
#include <stdio.h>

int main() {
    int n[100], i;

    for (i = 0; i < 100; i++)
        scanf("%d", &n[i]);

    for (i = 0; i < 99; i++) {
        if (n[i] + 1 == n[i + 1])
            printf("%d %d\n", n[i], n[i + 1]);
    }

    return 0;
}
