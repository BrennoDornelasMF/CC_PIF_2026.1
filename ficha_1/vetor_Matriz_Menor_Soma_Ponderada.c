#include <stdio.h>

int menorSomaPonderada(int N, double M[][N], double P[]);

int main() {
    int N = 3;

    double M[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    double P[3] = {1, 2, 3};

    int resultado = menorSomaPonderada(N, M, P);

    printf("Indice da coluna com menor soma ponderada: %d\n", resultado);

    return 0;
}


int menorSomaPonderada(int N, double M[][N], double P[]) {
    int j, i;
    
    int indiceMenor = 0;
    double menorSoma = 0.0;
   
    for (i = 0; i < N; i++) {
        menorSoma += M[i][0] * P[i];
    }


    for (j = 1; j < N; j++) {
        double soma = 0.0;

        for (i = 0; i < N; i++) {
            soma += M[i][j] * P[i];
        }

        if (soma < menorSoma) {   
            menorSoma = soma;
            indiceMenor = j;
        }
    }

    return indiceMenor;
}

