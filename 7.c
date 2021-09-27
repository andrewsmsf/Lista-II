/*7. Altere o programa anterior, intercalando 3 vetores de 10 elementos cada*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int vel1[10], vel2[10],v1e2e3[30], vel3[10];
    
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
        printf("\n\n");
    for(int i = 0; i < 10; i++)
    {
        printf(" - Escreva 10 elementos para el tercero vetor: ");
        scanf("%d", &vel3[i]);
    }
    int count =0, c = 0;
    for(int i = 0; i < 30; i++)
    { 
        v1e2e3[i] = vel1[count];
        v1e2e3[i=i+1] = vel2[count];
        v1e2e3[i=i+1] = vel3[count];
        if (count <= 10) count++;
    }
    for(int i =0; i < 30; i++){
        printf("\n %d", v1e2e3[i]);
    }
    return 0;
}