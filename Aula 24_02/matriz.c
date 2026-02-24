#include <stdio.h>

int main()
{
    int l, c;
    printf("Digite qtd de linhas e colunas: ");
    scanf("%d %d", &l, &c);
   
    int m[l][c];
    int t[l][c];
    int s[l][c];

    printf("Digite os elementos da matriz m:");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("Digite os elementos da matriz t:");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            scanf("%d", &t[i][j]);
        }
    }
   
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            s[i][j] = m[i][j] + t[i][j];
        }
    }
   
   
    printf("Matriz m:\n");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
    printf("Matriz t:\n");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("[%d] ", t[i][j]);
        }
        printf("\n");
    }
    printf("Matriz s:\n");
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("[%d] ", s[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}