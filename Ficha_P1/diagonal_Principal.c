#include <stdio.h>

int main(){

      int M[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    for (int i = 0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            if(i == j){
                printf("%d ", M[i][j]);
            }
        }
      //  printf("\n");
    }
}