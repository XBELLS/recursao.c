/******************************************************************************
recursão - Leia dois inteiros (x e y) e calcule a soma do menor 
até o maior usando recursã
*******************************************************************************/
#include <stdio.h>

int soma(int menor, int maior){
    if(menor==maior){ //condicao de parada
        return menor;
    }
    return menor + soma(menor + 1, maior);
}

int main(){
    int x, y;
    int menor, maior;
    
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);
    
    if(x<y){
        menor = x;
        maior = y;
    }else{
        menor = y;
        maior = x;
    }
    
    int resultado = soma(menor, maior);
    
    printf("Soma = %d", resultado);
    
    return 0;
}
