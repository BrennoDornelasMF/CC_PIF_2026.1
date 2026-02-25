#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int X[n];
    for(int i =0; i < n; i++){
        scanf("%d", &X[i]);

    }

    int menor_numero = X[0];
    int posicao_menor = 0;
    for (int i = 0; i < n; i++){
        
        if( X[i] < menor_numero){
            menor_numero = X[i];
            posicao_menor = i;
        }
    }
    
    printf("Menor valor: %d\n", menor_numero);
    printf("Posicao: %d\n", posicao_menor);
    

    return 0;
}