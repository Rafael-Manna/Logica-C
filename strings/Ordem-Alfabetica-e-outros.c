
#include <stdio.h>
#include <string.h>
void atv1(){
    int letra;
    char sigla[50];
    char frase[50];
    int j = 0;
    puts("Escreva uma frase:");
    fgets(frase,50,stdin);
     for(int i = 0 ;frase[i] != '\0';i++){
      if(frase[i]==' '){
      letra = i + 1;
      sigla[j++] = frase[letra];
         
      }
  }
   printf("%c",frase[0]);
    printf("%s",sigla);
    
}
void atv2(){
    int letra;
    char placa[10];
    char estado[20];
 
    printf("Numeração da placa:");
    fgets(placa,10,stdin);
    /*
1,2 – fevereiro 
3,4 – março 
5,6 – abril 
7,8 – maio 
9,0 – junho  
    */
 if(placa[6]=='1' ||placa[6]=='2'){
     strcpy(estado,"fevereiro");
 }   
  if(placa[6]=='3' ||placa[6]=='4'){
     strcpy(estado,"março");
 }    
  if(placa[6]=='5' ||placa[6]=='6'){
     strcpy(estado,"abril");
 }    
  if(placa[6]=='7' ||placa[6]=='8'){
     strcpy(estado,"maio");
 }    
  if(placa[6]=='9' ||placa[6]=='0'){
     strcpy(estado,"junho");
 }    
 printf("pagamento ipva no mes %s", estado);
 
}
void atv3(){
 
 char nomes[5][15];  
    char temp[15];  
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("Escreva o %dº nome: ", i + 1);
        fgets(nomes[i], 15, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0; 
    }
    //BubbleSort
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                // Troca as strings
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
    printf("\nEm ordem alfabética:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", nomes[i]);
    }

   
}
int main()
{
    int escolha;
    printf("Qual atividade voce deseja fazer?\n [1] Conversor para siglas\n [2] Mês de pagamento ipva\n [3] Ordem alfabética\n ");
    scanf("%d", &escolha);

    while (getchar() != '\n'); // Correção de bug do fgets no switch

    switch(escolha){
        case 1:
            atv1();
            break;
        case 2:
            atv2();
            break;
        case 3:
            atv3();
            break;
        default:
            printf("Atividade invalida.\n");
    }

    return 0;
}