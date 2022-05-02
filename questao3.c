#include <stdio.h>
int main()
{
    int n,qnt;
    //int fb=0,fb2=1;
    printf("Insira um valor: ");
    scanf("%d", &qnt);
    do{    
        n=qnt-1+qnt;
        printf("%d-",n);
        
   }while (qnt<=0);
 
    return 0;
}