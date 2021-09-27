/*Faça um Programa que leia 20 números inteiros e armazene-os num 
vetor. Armazene os números pares no vetor PAR e os números IMPARES 
no vetor impar. Imprima os três vetores.
*/
#include <stdlib.h>
#include <stdio.h>

int main (){

    int par[20], impar[20], v[20], i, j= 0, h= 0;

    printf("\nEscreva 20 numeros naturais: ");
    for(i = 0; i < 20; i++){;
        scanf("%d", &v[i]);
    }
    for(i = 0; i < 20; i++){
        if(v[i] %2 == 0){
            par[j]=v[i];
            j++;
        }
        else{
            impar[h] = v[i];
            h++;
        }
    }
    printf("\nNumeros pares: \n");
    for(i = 0; i < j; i++){
        printf("%d  \n", par[i]);
    }
    printf("\nNumeros impares: \n");
    for(i = 0; i < h; i++){
        printf("%d \n", impar[i]);
    }
    system("pause");
}