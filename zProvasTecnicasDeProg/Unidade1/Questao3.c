/******************************************************************************
Questao de struct
Cadastro de pessoas e suas informações // mostrar as maiores de idades
*******************************************************************************/
#include <stdio.h>
int main()
{
    int qtd;
   struct dados{
       char nome[30],endereço[30];
       int idade;
   };
    struct dados dados[5];
        for(int i = 0;i<5;i++){
        printf("Digite o nome  %d : ", i + 1);
        scanf(" %[^\n]", dados[i].nome);
        printf("Digite o endereço %d : ", i + 1);
        scanf(" %[^\n]", dados[i].endereço);
        printf("Digite a idade %d: ", i + 1);
        scanf("%d", &dados[i].idade);

    }
    printf("\n maiores de idade:\n");
    
     for(int i = 0; i<5;i++){
         if(dados[i].idade>17){
  qtd++;
    printf("\nNome: %s",dados[i].nome);
    printf(", Endereço: %s",dados[i].endereço);
         }
     }
     printf("\nQuantidade de maiores de idade: %d",qtd);
    
    return 0;
}
