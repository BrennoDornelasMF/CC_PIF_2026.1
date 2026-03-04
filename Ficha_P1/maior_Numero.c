#include <stdio.h>

int maiorNumero(int x, int y);
int somaNumero(int x, int y);
int powNumero(int x);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int maior = maiorNumero(a, b);
    printf("%d " , maior);

    int soma = somaNumero(a, b);
    printf("%d " , soma);

    int powA = powNumero(a);
    printf("%d ", powA);

    int powB = powNumero(b);
    printf("%d ", powB);



}

int maiorNumero(int x, int y){

    if(x > y){
        return x;
    }else{
        return y;
    }
}

int somaNumero(int x, int y){
    return x + y;
}

int powNumero(int x){
    
    int res = 1;

    for(int i = 0; i < 2; i++){
        res *= x;
    }

    return res;
}
