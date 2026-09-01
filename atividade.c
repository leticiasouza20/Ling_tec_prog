#include <stdio.h>
#include <stdlib.h>

/* Crie um progama que receba uma letra, e verifique se ela é vogal ou constante, se ela for vogal, verifique se ela é 'a' ou 'o' caso seja mostre "aoba" caso seja 'i' ou 'u' mostre 'lá ele'. Caso contrário mostre '67' */

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra:\n");
    scanf("%c", &letra);

    if (letra == 'a'|| letra == 'e'|| letra == 'i'|| letra == 'o' || letra == 'u' ) {
    	if (letra == 'a'|| letra == 'o'){
    		printf("Aoba\n");
		}
		if (letra == 'i'|| letra == 'u'){
    		printf("La ele\n");
    	}
    	
    }else{
    	print ("67");
    }
	return 0;
}
