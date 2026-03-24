#include<stdio.h>

void estatisticas(float *temp, int n, float *media, float *maior, float *menor);

int main(){

    int n =0;
    float media = 0.0;
    float menor = 0.0;
    float maior = 0.0;

    scanf("%d",n);

    float temperaturas[n];

    for(int i = 0; i < n ;i++){
        scanf("%f", *(temperaturas + i));
    }

    estatisticas(temperaturas, &n, &media, &maior, &menor);

    printf(" %f\n%f\n%f", media,maior,menor);

}

void estatisticas(float *temp, int n, float *media, float *maior, float *menor){

    float soma = 0;

    for(int i = 0; i < n; i++){
        soma += *(temp + i);

        if (*(temp + i) > *maior){
            *maior = *(temp + i);
        }else if (*(temp + i) < *menor){
            *menor = *(temp + i);
        }

        
    }

    *media = soma/n;

}
