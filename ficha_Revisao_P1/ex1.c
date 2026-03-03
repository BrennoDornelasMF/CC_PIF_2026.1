#include <stdio.h>

int nPares(int N, int V[]);

int main(){

    int n = 5;
    
    //int arr[n];
    int arr[5] = {1,2,8,4,5};

    int P = nPares(n,arr);

    printf("%d",P);

    return 0;
}

int nPares(int N, int V[]){
    int cont = 0;

    if(N == 0){
        return 0;
    }else{
        for (int i = 0; i < N; i++){
            if(V[i] % 2 == 0){
                cont++;
            }
        }
        return cont;
    }


}