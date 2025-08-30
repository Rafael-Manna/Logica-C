#include <stdio.h>
int main()
{
    int a,b;
    
    printf("seu primeiro valor: ");
    scanf("%d", &a);
    
    printf("seu segunda valor: ");
    scanf("%d", &b);
    
    if(a%b!=0)
    {
        printf("não é divisível.");
    }
    else
    {
        printf("é divisível.");
    }
    return 0;
}
