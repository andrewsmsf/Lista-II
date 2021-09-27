/*Faça um Programa que leia um vetor de 10 caracteres, e diga quantas 
consoantes foram lidas. Imprima as consoantes.*/

#include <stdlib.h>
#include <stdio.h>

int main (){
    meu();
}

void corrigidoEmAula()
{
   char vetorDezCaract[10];

   printf("Digite ate 10 caracteres: ");
   scanf("%s", vetorDezCaract);

   printf("O texto digitado foi: %s \n", vetorDezCaract);

   for (int i=0; i<10; i++){
      if(vetorDezCaract[i]!= 'a' && vetorDezCaract[i] !='o')
      printf("%c \n", vetorDezCaract[i]);
   }
}
void meu(){
    char lifegoes[10];

    printf("Escreva 10 caracteres: ");
    scanf("%s", lifegoes);

    for (int i = 0; i < 10; i++){
        if(lifegoes[i]!='a'&& lifegoes[i]!= 'e' && lifegoes[i]!= 'i' && lifegoes[i]!='o'){
            printf("\n%c", lifegoes[i]);
        }
    }
    printf("\nVoce escreveu %s.", lifegoes);
}