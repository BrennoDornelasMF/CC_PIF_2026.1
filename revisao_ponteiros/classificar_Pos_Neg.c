#include <stdio.h>

void classifica(int n, int* vetor, int* pos, int* neg, int* zeros);

int main(){
    int V1[10] = {1,3,0,-7,-9,3,-5,0,-2,2};

    int nZeros = 0;
    int Pos = 0;
    int Neg = 0;
    int N =10;
    classifica(N, V1,&Pos, &Neg, &nZeros);

    printf("Possitivos: %d\nNegativos: %d\nZeros: %d\n",Pos, Neg, nZeros);

}

void classifica(int n, int* vetor, int* pos, int* neg, int* zeros){

    for(int i = 0; i < n; i++){
        if(vetor[i] > 0){
            (*pos)++;
        }else if(vetor[i] < 0){
            (*neg)++;
        }else{
            (*zeros)++;
        }
    }
}
