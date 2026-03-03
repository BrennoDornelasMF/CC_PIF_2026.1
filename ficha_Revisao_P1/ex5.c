#include <stdio.h>

int eTransposta(int A[3][3], int B[3][3]);

int main(){

    int N ;

    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
     int B[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    int r = eTransposta(A,B);
    printf("%d", r);
     
}

int eTransposta(int A[3][3], int B[3][3]){
    int T [3][3] = {0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            T[i][j] = A[j][i];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(B[i][j] != T[i][j]){
                return 0;
            }
        }
    }
    return 1;

    
}
