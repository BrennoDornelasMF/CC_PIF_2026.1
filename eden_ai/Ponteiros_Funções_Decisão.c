#include <stdio.h>

// Implemente a função abaixo usando ponteiros e estruturas de decisão.
void ajustar(int *a, int *b) {
    if (*a > *b){
        *a = *a -1;
        *b = *b + 1;

    }else if (*a < *b){
        (*a)++;
        (*b)--;
    }
}

int main(void) {
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) return 0;

    ajustar(&A, &B);

    printf("%d %d\n", A, B);
    return 0;
}
