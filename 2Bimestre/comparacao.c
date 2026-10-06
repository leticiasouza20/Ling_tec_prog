#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b) {
	if (a>b) return b;
	else return a;
}
	
	int main(int argc, char *argv[]) {
		int valores [10];
		int maior, menor;
		
		printf ("Insira os valores: \n");
		
		scanf ("%d", &valores [0]);
		printf ("%d \n", &valores [0]); //mostra o valor da memória
		
		scanf ("%d", &valores [1]);
		printf ("%d \n", &valores [1]);
		
		scanf ("%d", &valores [2]);
		printf ("%d \n", &valores [2]);
		
		scanf ("%d", &valores [3]);
		printf ("%d \n", &valores [3]);
		
		scanf ("%d", &valores [4]);
		printf ("%d \n", &valores [4]);
		
		scanf ("%d", &valores [5]);
		printf ("%d \n", &valores [5]);
		
		scanf ("%d", &valores [6]);
		printf ("%d \n", &valores [6]);
		
		scanf ("%d", &valores [7]);
		printf ("%d \n", &valores [7]);
		
		scanf ("%d", &valores [8]);
		printf ("%d \n", &valores [8]);
		
		scanf ("%d", &valores [9]);
		printf ("%d \n", &valores [9]);
		
	return 0;
}

-------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b) {
	if (a>b) return b;
	else return a;
}
	
	int main(int argc, char *argv[]) {
		int valores [10];
		int maior, menor, i;
		
		printf ("Insira os valores: \n");
		
		// for (iniciação; verificação; incremento)
		for (i=0; i<10; i++){
			scanf ("%d", &valores [0]);
	    }
	    
	    printf ("\n");
	    for (i=9; i>0; i--){
	    	printf ("|%d|", valores [i]);

		}
	return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------
// Leia 10 números e mostre o maior entre os 5 primeiros e o menor entre os 5 últimos.
#include <stdio.h>
#include <stdlib.h>

int comparaMaior(int a, int b) {
    if (a > b) return a;
    else return b;
}

int comparaMenor(int a, int b) {
    if (a < b) return a;
    else return b;
}

int main(int argc, char *argv[]) {
    int valores[10];
    int maior, menor, i;

    printf("Insira os valores: \n");

    // for (iniciação; verificação; incremento)
    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    maior = valores[0];
    for (i = 1; i < 5; i += 2) {
        int maior_temp = comparaMaior(valores[i], valores[i + 1]);
        maior = comparaMaior(maior_temp, maior);
    }

    menor = valores[5];
    for (i = 6; i < 9; i += 2) {
        int menor_temp = comparaMenor(valores[i], valores[i + 1]);
        menor = comparaMenor(menor_temp, menor);
    }

    printf("\n");
    printf("maior |%d|", maior);

    printf("\n");
    printf("menor |%d|", menor);

    return 0;
}
