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
