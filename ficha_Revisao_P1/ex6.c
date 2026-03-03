#include <stdio.h>

int indexColunaMaiorSoma(int N, int M[N][N]);

int main(){

    int N = 3;

    int A[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    int index = indexColunaMaiorSoma(N,A);
    printf("%d", index);


} 

int indexColunaMaiorSoma(int N, int M[N][N]){

    int i, j, soma;
    int indexMaiorColuna = 0;
    int somaMax = 0;

    for(j = 0; j < N;j++){
        soma = 0;
        for(i = 0; i < N; i++){
            soma += M[i][j];
        }
        if (soma > somaMax){
            somaMax = soma;
            indexMaiorColuna = j;
        }
    }

    return indexMaiorColuna;

    
}
