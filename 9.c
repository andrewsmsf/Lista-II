/*9. Faça um programa que receba a temperatura média de cada mês do ano 
e armazene-as em uma lista. Após isto, calcule a média anual das 
temperaturas e mostre todas as temperaturas acima da média anual, e 
em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 –
Fevereiro, . . . ).*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int i;
    char vMes [12][10] = {"janeiro",  "fevereiro", "marco", "abril", "maio", "junho", "julho","agosto", "setembro", "outubro", "novembro", "dezembro"};
    float meTemp[12], somaMedia = 0;
    for(i = 0; i < 12; i++){
        printf("Qual foi a temperatura media do mes %s em C: ", vMes[i]);
        scanf("%f", &meTemp[i]);
        somaMedia += meTemp[i];
    }
    somaMedia = somaMedia/12.0;
    printf("\n\nA media anual foi %.2f.", somaMedia);
    printf("\nTemperaturas acima da media anual: ");
        for(i = 0; i < 12; i++){
            if(meTemp[i] > somaMedia){
            printf("\n%d - %s, media: %.2f.",i+1 ,vMes[i], meTemp[i]);
        }
    }
}