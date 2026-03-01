#include <stdio.h>

int linhasCrescentes(int N, int M[][N]);

int main(){
   
    int mat[3][3] = {
        {1,3,5},
        {2,4,8},
        {0,7,9}
    };

    int N = 3;
 

    linhasCrescentes(N, mat);

    return 0;
}

int linhasCrescentes(int N, int M[][N]){

    int i,j;
    for(i = 0;i < N; i++){
        for(j = 0; j < N - 1; j++){
            if (M[i][j] > M[i][j+1]){
                return 0;
            }
        }
    }

    return 1;

}