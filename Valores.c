#include <stdio.h>

int main(int argc, char *argv[]) {
    int a, b, c, maior_temp, maior;

    printf("Insira os valores A, B, C: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b) {
        maior_temp = b;
    } else {
        maior_temp = a;
    }

    printf("%d eh o maior_temp\n", maior_temp);

    if (maior_temp < c) {
        maior = c;
    } else {
        maior = maior_temp;
    }

    printf("%d eh o maior\n", maior);

    return 0;
} 
---------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b, c;

    printf("Insira os valores A, B, C:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d eh o maior\n", a);
    } 
    
    if (b > a && b > c) {
        printf("%d eh o maior\n", b);
    }

    if (c > a && c > b) {
        printf("%d eh o maior\n", c);
    }

    return 0;
}
