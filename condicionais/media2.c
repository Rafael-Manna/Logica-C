/******************************************************************************
Ler o nome, as três notas e o número de faltas de um aluno e escrever qual a sua situação 
final: Aprovado, Reprovado por Falta ou Reprovado por Média. A média para 
aprovação é 7,0 e o limite de faltas é 25% do total de aulas. O número de aulas 
ministradas no semestre foi de 80. A reprovação por falta sobrepõe a reprovação por 
Média. 
*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[15]= "";
    int faltas;
    float nota1,nota2,nota3,media;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("primeira nota:");
    scanf("%f",&nota1);
    printf("segunda nota:");
    scanf("%f",&nota2);
    printf("terceira nota:");
    scanf("%f",&nota3);
    printf("quantas faltas?");
    scanf("%d", &faltas);
    media = ((nota1+nota2+nota3/3));
    
    if (media>=7 && faltas<=20 ){
         printf("Situação do aluno %s: ", nome);
          printf("Aprovado por Média!");
    } else if (media<7 && faltas<=20){
         printf("Situação do aluno %s: ", nome);
          printf("Reprovado por Média!");
    }
    else if (media<7 && faltas>20){
         printf("Situação do aluno %s: ", nome);
          printf("Reprovado por faltas e notas!");
    }
    else if (media>=7 && faltas>20){
         printf("Situação do aluno %s: ", nome);
          printf("Reprovado por faltas!");
    }
    return 0;
}