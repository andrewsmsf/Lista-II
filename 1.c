#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
/*1. Faça um Programa que leia um vetor de 10 números reais e mostre-os na 
ordem inversa.
*/
void arthur (){
   int vetor[11],i;
  
   for (i = 1; i <= 10; i++)
   {
      vetor[i] = 0;
      printf("\n%d ", i);
   }
   printf("\n\nInversa#####\n\n");
   for (i = i - 1; i >= 1; i--)
   {
     vetor[i] = 11;
     printf("\n%d ", i);
   }
}

int main (void){
   arthur();
}