#include <stdio.h>
int main()
{
    float nota1,nota2,nota3,mediaf;
        printf("sua primeira nota:");
    scanf("%f", &nota1);
        printf("sua segunda nota:");
    scanf("%f", &nota2);
        printf("sua terceira nota:");
    scanf("%f", &nota3);
    mediaf = ((nota1+nota2+nota3)/3);
    printf("sua média foi: %.2f!", mediaf);
    return 0;
}
