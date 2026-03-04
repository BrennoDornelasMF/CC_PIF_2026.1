#include <stdio.h>

int main(){

    int N = 3;
    int A[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}
    };

    int mult = 1;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j || i + j == N - 1)
            {
                mult *= A[i][j];
            }
            else if(N % 2 == 1 && j == N/2)
            {
                mult *= A[i][j];
            }
        }
    }

    printf("%d", mult);
}