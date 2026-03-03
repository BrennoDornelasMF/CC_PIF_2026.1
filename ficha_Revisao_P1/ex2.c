#include <stdio.h>

int matrizIndentidade(int M[][3]);

int main(){

    int mat[3][3] = {{1,0,0},{0,1,0},{0,0,1}};

    int R = matrizIndentidade(mat);
    printf("%d", R);

    return 0;

}

int matrizIndentidade(int M[][3]){
    int i,j;
    int diagonalP = 0;
    int cont = 0;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if(i == j && M[i][j] == 1){
                diagonalP++;
            }else if(M[i][j] == 0){
                cont++;
            }else{
                return 0;
            }
            
            
        }
    }

    if(diagonalP == 3 && cont == 6){
        return 1;
    }

    
}


/*
    ordem da matriz(x)
    X = 5

    nº de elementos na diagonal principal == x
    nº de elementos fora da diagonal principal == (x * x) - x
*/