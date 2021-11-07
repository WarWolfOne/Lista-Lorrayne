#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Somar ente 10 numeros, os numeros que são pares e primos.

int main() {

	setlocale(LC_ALL, "Portuguese");

	int num[10], somarPares = 0, somarPrimos = 0, i, contadorResto = 0;
	
	for (i >= 1; i <10; i++) {
		printf("Insira um numero inteiro: ");
		scanf("%d", &num[i]);
			if (num[i]%2 == 0) {
				somarPares = somarPares + num[i];
			} else if (num[i]%1 == 0){
				contadorResto++;
			} if (contadorResto == 2) {
				somarPrimos = somarPrimos +num[i];
			}
	}
	
	printf("Soma dos n°s Pares: %d", somarPares);
	printf("Soma dos n°s Primos: %d", somarPrimos);
    
	return 0;

}

