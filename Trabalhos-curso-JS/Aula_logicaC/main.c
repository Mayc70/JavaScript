#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int idade;

    printf("Ola! Qual seu nome?\n");
    scanf("%s",&nome);

    printf("\nQual seu sobrenome?\n");
    scanf("%s",&sobrenome);

    printf("\nQual a sua idade?\n");
    scanf("%d",&idade);

    printf("Nome: %s\nSobrenome: %s\nIdade: %d\n",nome,sobrenome,idade);

    printf("\nAguarde enquanto validamos seus dados...");

    printf("a primeira letra do seu nome e: %c",nome[0]);

    if(idade >= 18){
        printf("\nVoce e adulto!");
    }else if(idade >= 12){
        printf("\nVoce e adolecente!");
    }else{
        printf("\nVoce e crianca!");
    }



    return 0;
}
