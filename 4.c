/*4. Faça um Programa que peça as quatro notas de 10 alunos, calcule e 
armazene num vetor a média de cada aluno, imprima o número de alunos 
com média maior ou igual a 7.0.
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    float mediaAluno[5];

    float nota=0, soma, media =0;

    for (int j = 1; j <=5; j++){
        printf("\n%d Aluno ", j);
        for(int i = 1; i<= 4;i++){
            printf("\n%d Nota: ", i);
            scanf("%f", &nota);
            soma = soma + nota;
            media = soma/i;
        }
        printf("\nMedia eh: %f \n", media);
        soma =0;
        mediaAluno[j] = media;
    }
    int h = 0;
    for(int i =1; i<=5; i++){
        if(mediaAluno[i] >= 7){
            printf("\nValores altos de media: %f.\n", mediaAluno[i]);
            h++;
        }
    }
    printf("A quantidade de alunos com media maior ou igual a 7 eh de %d \n", h);
}