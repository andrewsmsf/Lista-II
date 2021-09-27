/*10.Utilizando listas faça um programa que faça 5 perguntas para uma pessoa 
sobre um crime. As perguntas são:
1. "Telefonou para a vítima?"
2. "Esteve no local do crime?"
3. "Mora perto da vítima?"
4. "Devia para a vítima?"
5. "Já trabalhou com a vítima?" O programa deve no final emitir uma 
classificação sobre a participação da pessoa no crime. Se a pessoa 
responder positivamente a 2 questões ela deve ser classificada 
como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como
"Assassino". Caso contrário, ele será classificado como "Inocente"*/
#include <stdlib.h>
#include <stdio.h>
int main (){
    int h =0;
    char alternativa[5];

    printf("#Responda s - sim e n - nao#\n");
    printf("\nTelefonou para a vitima? ");
    scanf("%s", &alternativa[0]);
    printf("\n");
    printf("\nEsteve no local do crime? ");
    scanf("%s", &alternativa[1]);
    printf("\n");
    printf("\nMora perto da vitima? ");
    scanf("%s", &alternativa[2]);
    printf("\n");
    printf("\nDevia para a vitima? ");
    scanf("%s", &alternativa[3]);
    printf("\n");
    printf("\nJa trabalhou com a vitima? ");
    scanf("%s", &alternativa[4]);

    for (int i = 0; i < 5; i++){
        if( alternativa[i] == 's'){
            h += 1;
        }
    }
    if ( h == 2){
        printf("\n\n Voce eh supeito.");
    }
    else if ( h == 3 || h == 4){
        printf("\n\n Voce eh cumplice.");
    }
    else if (h == 5){
        printf("\n\n VOCE E ASSASINO!");
    }
    else {
        printf("\n\n Voce eh inocente.");
    }
    return 0;
}