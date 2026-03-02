#include <stdio.h>


int removerRepeticoes (int N, int V[], int R[]);

int main(){

    int V[9] = {5, 5, 5, 2, 2, 7, 3, 3, 1};
    int N = 9;

    int R[9];

    removerRepeticoes(N, V, R);


    return 0;
}

int removerRepeticoes (int N, int V[], int R[]){
    if(N == 0){
        return 0;
    }


    R[0] = V[0];
    int count = 1;
    int i;

    for(i = 1; i < N; i++){
        if (V[i] != V[i -1]){
            R[count] = V[i];
            count++;
        }
    }

    for(i=0; i < count; i++){
        printf("%d", R[i]);
    }
    printf("\n%d", count);
    
    return count;
}