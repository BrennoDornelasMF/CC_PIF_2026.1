#include <stdio.h>

void mundacaDeSinais (int N, int M[][N]);

int main(){

      int M[3][3] = {
        {1,-3,5},
        {2,4,8},
        {-2,7,9}
    };

    int N = 3;

    mundacaDeSinais(N, M);


    return 0;
}

void mundacaDeSinais (int N, int M[][N]){

    int i, j;

    int qtdMudanca;
    int qtdMudancaAnterior = -1;
    int indexMaiorQtd = 0;

    for(i = 0; i < N; i++){
        qtdMudanca = 0;

        for(j = 1; j < N; j++){
            int a = M[i][j];
            int b = M[i][j -1 ];

            if (a * b < 0 ){
                qtdMudanca++;
            }



        }
        if(qtdMudanca > qtdMudancaAnterior){
            indexMaiorQtd = i;
            qtdMudancaAnterior = qtdMudanca;
        }
       
    }

    printf("%d", indexMaiorQtd);


}