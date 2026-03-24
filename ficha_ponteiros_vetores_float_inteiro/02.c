#include <stdio.h>

    void separa_transacoes(float *valores, int n, float *positivos, int *qtd_pos, float *negativos, int *qtd_neg);

int main() {
    float valores[5] = {100.0,-5.0,25,-13,5};
    float positivos[5] = {0};
    float negativos[5] = {0};

    int qntd_pos = 0;
    int qntd_neg = 0;

    separa_transacoes(valores, 5, positivos,&qntd_pos, negativos,&qntd_neg);

    printf("qtd_pos: %d\n",qntd_pos);
    printf("qtd_neg: %d\n",qntd_neg);
    printf("positivos: \n");
    
    for(int i = 0;i<5;i++){
        printf("%.2f " ,*(positivos + i));
    }
    printf("\nnegativos: \n");

     for(int i = 0;i<5;i++){
        printf("%.2f " ,*(negativos + i));
    }



    return 0;
}

void separa_transacoes(float *valores, int n, float *positivos, int *qtd_pos, float *negativos, int *qtd_neg){
    
    
    float *p = valores;        
    float *p_pos = positivos;  
    float *p_neg = negativos;  

    for (int i = 0; i < n; i++, p++)
    {
        if (*p > 0.0)
        {
            *p_pos = *p;
            p_pos++;
            (*qtd_pos)++;
        }
        else if (*p < 0.0)
        {
            *p_neg = *p;
            p_neg++;
            (*qtd_neg)++;
        }
        
    }

}