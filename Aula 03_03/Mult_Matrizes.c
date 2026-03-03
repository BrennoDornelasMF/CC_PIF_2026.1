#include <stdio.h>

void multMatriz(int A[][3], int B[][3],int C[][3]);

int main(){

       int A[3][3] = {
        {1,3,5},
        {2,4,8},
        {0,7,9}
    };

       int B[3][3] = {
        {9,4,8},
        {9,3,0},
        {4,7,5}
    };

       int C[3][3];

    multMatriz(A, B, C);

    int i,j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", C[i][j]);
       
        }
        printf("\n");
    }


}
    


void multMatriz(int A[][3], int B[][3],int C[][3]){
    
    int i,j,k;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            C[i][j] = 0;
            for(k = 0; k < 3;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

}