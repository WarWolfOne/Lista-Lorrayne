#include <stdio.h>
#include <math.h>
#include <locale.h>

//Dev: Lorrayne Annyelly P. Cardoso
//Exercicio 17-lista de repetição 

//Faça um programa que receba a idade e o peso de sete pessoas.
//a quantidade de pessoas com mais de 90 quilos.
//a média das idades das sete pessoas.

main(){

    setlocale(LC_ALL,"Portuguese");

    int idade, i = 1;
    int  soma = 0,  numM = 0, numH = 0, m, h;
    float sexo, mediaT, mediaM = 0, mediaH = 0;

    //Inserção da idade e sexo/ repetição
    for( i >= 0; i <= 7; i++ ){
         printf(" \n Informe a idade: ");
         scanf("%d", &idade);
         printf(" Informe o sexo, sendo '1' para mulher e '2' para homem: ");
         scanf("%f", &sexo);

        //Condição para idade média das mulheres.
        if(sexo == 1){
            sexo = m;
            numM = numM + 1;
            mediaM = mediaM + idade;
        }

        //Condição para idade média dos homens.
        else{
            numH = numH + 1;
            mediaH = mediaH + idade;
        }
        i++; 
    }

    //Saída das médias 
    mediaT=(mediaM + mediaH) / 7;
    printf("\nIdade média do grupo: %.2f", mediaT);
    printf("\nIdade média das mulheres: %.2f", mediaM/numM);
    printf("\nIdade média dos homens: %.2f", mediaH/numH);

}
