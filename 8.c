/*Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que 
determine quantos alunos com mais de 13 anos possuem altura inferior à 
média de altura desses alunos.*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int vIdade[30];
    float vAltura[30], mediaAltura, somaAltura;
    int qtdInferiormedia = 0;
    int qtAlunos = 30;
    int i= 0;  
    for(i =0; i < qtAlunos; i++){
        printf("Idade do %i aluno: ", i+1);
        scanf("%d", &vIdade[i]);
        printf("Altura do %i aluno: ", i+1);
        scanf("%f", &vAltura[i]);
        somaAltura += vAltura[i]; // mediaAltura = mediaAltura + altura;
    }
    mediaAltura = somaAltura/qtAlunos;
    for(i = 0; i< qtAlunos; i++){
        if((vAltura[i] < mediaAltura) && (vIdade[i] > 13)){
            qtdInferiormedia++;
        }
    }
    printf("\nA quantidade alunos abaixo da media %.2f, maior de 13 anos: %d ", mediaAltura, qtdInferiormedia);
    system("pause");
}