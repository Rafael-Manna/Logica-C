/* 1. Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do 
atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados 
de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais velho.  */
#include <stdio.h>
#include <string.h>
void atv1(){
    int velho,alto;
    struct atleta{
      char nome[20],esporte[20];
      int idade;
      float altura;
    };
    struct atleta times[5],temp;
    velho = 0;
    alto = 0;
    for(int i = 0;i<5;i++){
        printf("Digite o nome do atleta %d : ", i + 1);
        scanf("%s", times[i].nome);

        printf("Digite o esporte do atleta %d : ", i + 1);
        scanf("%s", times[i].esporte);

        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &times[i].idade);

        printf("Digite a altura do atleta %d (em metros): ", i + 1);
        scanf("%f", &times[i].altura);
    }
    
       for (int i = 0; i < 5; i++) {
        if (times[i].idade > times[velho].idade) {
            velho = i;
        }
        if (times[i].altura > times[alto].altura) {
            alto = i;
        }
    }
    
    printf("\nAtleta mais velho: %s, Idade: %d\n", times[velho].nome , times[velho].idade);
    printf("\nAtleta mais alto: %s, Altura: %.2f metros\n", times[alto].nome, times[alto].altura);
    /*
     Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia os 
dados de cinco atletas e os exiba por ordem de idade, do mais velho para o mais 
novo. 
    */
    //bubblesort
      for (int i = 0; i < 5; i++) {
        for ( int j = i ; j < 5; j++) {
            if (times[i].idade > times[j].idade) {
                // Troca as variaveis
                (temp = times[i]);
                (times[i] = times[j]);
                (times[j] = temp);
            }
        }
    }
     printf("\nAtletas em ordem do mais velho para o mais novo:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Nome: %s, Idade: %d, Altura: %.2f, Esporte: %s\n",
               times[i].nome, times[i].idade, times[i].altura, times[i].esporte);
    }
}
int main()
{
   atv1();

    return 0;
}