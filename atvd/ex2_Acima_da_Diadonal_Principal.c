#include <stdio.h>

int main(){
    
    double M[12][12];

    char O;
    scanf("%c", &O);

    double soma = 0.0;
    int count = 0;
    int i, j;

    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        } 
    }

     for (i = 0; i < 12; i++) {
        for (j = i + 1; j < 12; j++) { 
            soma += M[i][j];
            count++;
        }
    }

    if(O == 'M'){
        soma = soma / count;
    }

    printf("%1.lf\n", soma);
    
     
   

    return 0;
}