#include <stdio.h>

void tranpor3x3(int (*m)[3]);

int main (){
    int M[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int V[9] ={0};

    int x =0;

    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            V[x] = M[i][j];
            x++;
        }
    }

    tranpor3x3(M);
}

void tranpor3x3(int (*m)[3]){

    int transposta[3][3]={0};

      for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
           transposta[j][i] = *(*(m + i) + j);
        }
    }

    for(int i = 0; i < 3;i++){
        printf("\n");

        for(int j = 0; j < 3;j++){
         printf("%d ", transposta[i][j]);
        }
    }

    printf("\n\n");
    for(int i = 0; i < 3;i++){
        printf("\n");
        
        for(int j = 0; j < 3;j++){
         printf("%d ", *(*(m + i) + j));
        }
    }

   
}
