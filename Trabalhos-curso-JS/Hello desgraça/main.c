#include <stdio.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int dia;




    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("\nLegal, %s...qual seu sobrenome?\n",nome);
    scanf("%s",sobrenome);

    printf("\nShow de bola,seu sobrenome e %s...Qual seu ano de nascimento?\n",sobrenome);
    scanf("%d",&ano_nascimento);

    printf("\nEntao voce e de %d interessante..Qual dia do seu nascimento?\n",ano_nascimento);
    scanf("%d",&dia);

    printf("\nQuais sao as suas  metas esse ano %s ?\n",nome);
    scanf("%s",nome);

    printf("\nInterssante, com persistencia e dedicacao voce chegara la\n",nome);
    scanf("%s",nome);

















   return 0;


}
