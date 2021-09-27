/*6. Faça um Programa que leia dois vetores com 10 elementos cada. Gere 
um terceiro vetor de 20 elementos, cujos valores deverão ser compostos 
pelos elementos intercalados dos dois outros vetores.*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int vel1[10], vel2[10],v1e2[20];
    
    for(int i = 0; i < 10; i++)
    {
        printf(" - Escreva 10 elementos para o primeiro vetor: ");
        scanf("%d", &vel1[i]);
    }
    printf("\n\n");
    for(int i = 0; i < 10; i++)
    {
        printf(" - Escreva 10 elementos para o segundo vetor: ");
        scanf("%d", &vel2[i]);
    }
    int count =0;
    for(int i =0; i < 20; i++)
    { 
        v1e2[i] = vel1[count];
        v1e2[i=i+1] = vel2[count];
        if (count <= 10) count++;
    }
    for(int i =0; i < 20; i++){
        printf("\n %d", v1e2[i]);
    }
    return 0;
}