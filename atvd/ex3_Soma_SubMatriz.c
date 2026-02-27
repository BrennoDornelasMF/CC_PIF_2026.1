#include <stdio.h>

#define MAXR 200
#define MAXC 200

void somaSubMatriz (int R, int C, int K, int A[][C]);
/*
  Você deve criar 1 função que encontre:
  - a maior soma de uma submatriz KxK
  - a linha vencedora
  - a coluna vencedora

  Critério:'
  - maior soma
  - em empate: menor linha
  - persistindo: menor coluna
*/

int main() {
    int R, C, K;
    // int A[MAXR][MAXC]

    if (scanf("%d %d %d", &R, &C, &K) != 3) return 0;

    int A[R][C];

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }
/*
       for(int i = 0; i < R;i++){
        printf(" \n");
        for(int j = 0; j < C;j++){
            printf("%d ", A[i][j]);
        }
    }
*/
    somaSubMatriz(R, C, K, A);
    /*
      Chame aqui sua função para obter:
      - soma_maxima
      - linha
      - coluna
      e então imprima no formato:
      soma_maxima linha coluna
    */

 

    return 0;
}

void somaSubMatriz (int R, int C, int K, int A[][C]){

    int soma = 0;
    int linha = 0;
    int coluna = 0;
    int somaMax = -10000000;

    int i,j,x,y;

    for(i = 0; i <= R - K; i++){
        for(j = 0; j <= C - K; j++){

            soma = 0;

            for(x = 0; x < K; x++){
                for(y = 0; y < K; y++){
                    soma += A[i + x][j + y];
                }
            }
            
            if(soma > somaMax){
                somaMax =soma;
                linha = i;
                coluna = j;
            }



        }
    }

    printf("%d %d %d", somaMax,linha,coluna);

}