#include <stdio.h>

int indexMaiorElemento (int N, int V[N]);

int main(){
    int N = 5;
    int V[5] = {1,2,3,4,5};

    int r = indexMaiorElemento(N,V);
    printf("%d", r);

    return 0;
}

int indexMaiorElemento (int N, int V[N]){
    int maior = V[0];
    int index = 0;

    for(int i = 1; i < N; i++){
        if (V[i] > maior){
            index = i;
            maior = V[i];
        }
    }

    return index;
    
}