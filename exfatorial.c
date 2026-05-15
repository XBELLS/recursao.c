/******************************************************************************
recursão
*******************************************************************************/
#include <stdio.h>

int fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

void main(){
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    if(n<0){
        printf("error, numero negativo");
    }else{
        printf("n! = %d", fatorial(n));
    }
}
