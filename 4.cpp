#include <stdio.h>
#include <math.h>
#include <locale.h>

//Dev: Lorrayne Annyelly P. Cardoso
//Exercicio 9-lista de repetição 

//Faça um programa que receba a idade, a altura e o peso de 25 pessoas. Calcule e mostre:
//a quantidade de pessoas com idade superior a 50 anos;
//a média das alturas das pessoas com idade entre 10 e 20 anos;
//*

main(){

    int a, b, c, d, i, aux;

    i = 1;
    
    for(i >= 1; i <= 7; i++) {
    	printf("Informe um valor: \n");
	    scanf("%d", &a );
		scanf("%d", &b );
		scanf("%d", &c );
		scanf("%d", &d );
    	if (a < b && b < c && c < d) {
    		printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, b, c, d);
    		printf("Grupo em ordem decrecente: %d = %d, %d, %d, %d \n",i, d, c, b, a);
		}
		if (a < b && b < d && d < c) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, b, d, c);
			printf("Grupo em ordem decrecente: %d = %d, %d, %d, %d \n",i, c, d, b, a);
		}
		if (a < d && d < b && b < c) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, d, b, c);
			printf("Grupo em ordem decrecente: %d = %d, %d, %d, %d \n",i, c, b, d, a);
		}
		if (b < a && b < c && a < c && c < d) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, a, c, d);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, c, a, b);
		}
		if (a < d && d < b && b < c) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, a, d, c);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, d, a, b);
		}
		if (b < c && c < d && d < a) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, c, d, a);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, d, c, b);
		}
		if (b < c && c < a && a < d) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, c, a, d);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, a, c, b);
		}
		if (b < d && d < c && c < a) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, d, c, a);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, c, d, b);
		}
		if (a < d && d < b && b < c) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, d, a, c);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, a, d, b);
		}
		if (c < a && a < b && b < d) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, a, b, d);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, b, a, c);
		}
		if (c < a && a < d && d < b) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, a, d, b);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, d, a, c);
		}
		if (c < b && b < a && a < d) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, b, a, d);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, a, b, c);
		}
		if (c < a && a < b && b < d) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, b, d, a);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, d, b, c);
		}
		if (c < d && d < b && b < a) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, d, b, a);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, b, d, c);
		}
		if (c < d && d < a && a < b) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, d, a, b);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, a, d, c);
		}
			if (c < d && d < b && b < a) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, d, b, a);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, b, d, c);
		}
		if (d < a && a < b && b < c) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, a, b, c);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, b, a, d);
		}
		if (d < b && b < c && c < a) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, b, c, a);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, c, b, d);
		}
		if (d < b && b < a && a < c) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, b, a, c);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, c, a, b, d);
		}
		if (d < c && c < a && a < b) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, c, a, b);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, b, a, c, d);
		}
		if (d < c && c < b && b < a) {
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, d, c, b, a);
			printf("Grupo em ordem crescente: %d = %d, %d, %d, %d \n",i, a, b, c, d);
		}
		
    }
    
    return 0;

}
