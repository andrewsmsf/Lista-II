/*5. Faça um Programa que peça a idade e a altura de 5 pessoas, armazene 
cada informação no seu respectivo vetor. Imprima a idade e a altura na 
ordem inversa a ordem lida*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int vIdade[5], vAltura[5];
    int idade, altura;
    for(int j =1; j <=5; j++){
        printf("\n%d Pessoas- \n", j);
        for(int i= 0; i < 1; i++){
            printf("Idade: ", i);
            scanf("%d", &idade);
            printf("Altura: ", i);
            scanf("%d", &altura);
        }
        vIdade[j]= idade;
        vAltura[j]=altura;
    }
    printf("\n\nOrdem Inversa##\n");
    for(int j = 5; j >= 1; j--){
        printf("\n%d Pessoas- ", j);
        printf("\nIdade: %d\n", vIdade[j]);
        for(int i = 1; i> 0; i--){
            printf("Altura: %d\n", vAltura[j]);
        }
    }
}