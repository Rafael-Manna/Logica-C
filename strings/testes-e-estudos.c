#include <stdio.h>
#include <string.h>
int main()
{
    char frase[50],frase2[50],nomes[5][50],temp[50];
    int tam = 0, espaços = 0;
    printf("    Estudo de strings\n");
    strcpy(frase ,"Bananas de pijamas"); // strcpy copia uma string pra outra, ex: a=oi, b=ola strcpy(a,b) -> a = ola b = ola
    printf("%s",frase);
    tam = strlen(frase); //strlen le quantos caracteres uma string tem, incluindo os espaços
    printf("\nNumero de caracteres da frase %s é %d (com espaços)",frase,tam);
    for(int i = 0; i<tam;i++){ // função pra ler os espaços
        if (frase[i] == ' '){
            espaços ++;
        }
    }
    printf("\nNumero de espaços: %d",espaços);
    tam = tam - espaços;
    printf("\nNumero de caracteres da frase %s é %d (sem espaços)\n",frase,tam);
   
     for(int i = 0; i<5;i++){
       printf("Escreva o %d nome:\n",i+1);
       fgets(nomes[i],50,stdin);
    }
     for(int i = 0; i<5;i++){
       printf(" %s",nomes[i]);
    }
    printf("\nNomes em ordem alfabetica:\n"); // com bubblesort
    for(int i = 0; i<4;i++){
        for(int j = i + 1; j<5;j++){ 
         if(strcmp(nomes[i],nomes[j]) > 0){ //strcmp compara strings  (> 0, se String1 > String2)
            strcpy(temp, nomes[i]); //troca de variaveis
            strcpy(nomes[i], nomes[j]);
           strcpy(nomes[j], temp);
         }
        }
    }
    for(int i = 0; i<5;i++){
       printf(" %s",nomes[i]);
    }
     return 0;
}
