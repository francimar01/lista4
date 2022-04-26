#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int r,u,a,c;
    c=0;
    srand(time(NULL)); 
    r = rand(); 
    r = r % 100 + 1; 
    printf("jogo de advinhação\ndescubra qual o número\n");
do{
    printf("DIGITE UM NÚMERO\n");
    scanf("%d",&u);
    c++;    
    if(r>u){
            printf("palpite errado\n");
            printf("palpite muito baixo\n");
        }
    else if (r<u)
        {
            printf("palpite errado\n");
            printf("palpite muito alto\n");
        }
    else if(r==u){
        printf("palpite correto\n");
    }        
  
}while(r!=u);
printf("total de palpites:%d\n",c);
return 0;
}