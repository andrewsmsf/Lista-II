/*11.Faça um programa que leia um número indeterminado de valores, 
correspondentes a notas, encerrando a entrada de dados quando for 
informado um valor igual a -1 (que não deve ser armazenado). Após esta 
entrada de dados, faça:
1. Mostre a quantidade de valores que foram lidos;
2. Exiba todos os valores na ordem em que foram informados, um ao 
lado do outro;
3. Exiba todos os valores na ordem inversa à que foram informados, 
um abaixo do outro;
4. Calcule e mostre a soma dos valores;
5. Calcule e mostre a média dos valores;
6. Calcule e mostre a quantidade de valores acima da média 
calculada;
7. Calcule e mostre a quantidade de valores abaixo de sete;
8. Encerre o programa com uma mensagem;*/
#include <stdlib.h>
#include <stdio.h>
int main (){
    int alt, i, qtdV= 0, nEmOrdem[alt];
    int j, h;
    float soma =0;
    float media;
    int acimaMedia =0, qts= 0;
    
    printf("O programa ira parar quando digitar '-1'");
    for (i = 0; ;i++ ){
        printf("\nDigite um numero: ");
        scanf("%d", &alt);
        qtdV = i;
        nEmOrdem[i] = alt;
        soma += alt;
        if ( alt == -1){
            printf("\n #stop# \n");
            break;
        }
    }
    printf("\nQuantidade de valores lidos: %d", qtdV);
    printf("\nOs Valores escritos a cima sao: ");
    for(j =0; j <= i-1; j++){
        printf("%d ", nEmOrdem[j]);
    }
    printf("\nOs valores invertidos: ");
    for(h =1; j>= h; j--){
        printf("%d ", nEmOrdem[j-1]);
    }
    printf("\nA soma dos valores são %.2f", soma + 1);
    media = (soma)/(i);
    printf("\nMedia dos valores %.2f.", media);
    
    for(j = 0;j <= i-1; j++){
      if(nEmOrdem[j] > media){
          acimaMedia++;
      }
    }
        printf("\nMaiores que a media: %d", acimaMedia);
    printf("\nA quantidade de valores abaixo de 7 :\n");
    for(j = 0; j <= i-1; j++){
      if(nEmOrdem[j] < 7)
      qts++;
    }
      printf(" %d", qts);
}