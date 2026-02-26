#include <stdio.h>

int main(void) {
    int R, C;
    scanf("%d %d", &R, &C);

    int mat[R][C];
    int soma[R];
    int i, j;

    for(i = 0; i < R; i++){
        for(j = 0; j < C; j++){
            scanf("%d", &mat[i][j]);

        }
    }


    for(i = 0; i < R; i++){
        soma[i] = 0;
        for(j = 0; j < C; j++){
            soma[i] += mat[i][j];    
        }
    }
    
    int maior = soma[0];
    int indice = 0;

    for(i = 0; i < R; i++){
        if(soma[i] > maior){
            maior = soma[i];
            indice = i;
        }

    }
    

    for(i=0; i < R; i++){
        printf("%d ", soma[i]);
        
    }

    printf("\n%d", indice);

    return 0;
}
