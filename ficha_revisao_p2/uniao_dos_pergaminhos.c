#include <stdio.h>
#include <string.h>

void conectar(char *destino, char *origem);

int main(){

    char ori[50];
    char des[100];

    fgets(ori,49,stdin);
    fgets(des,99,stdin);

    ori[strcspn(ori, "\n")] = '\0';
    des[strcspn(des, "\n")] = '\0';

    conectar(des,ori);
   

    printf("%s\n", des);
    printf("%s", ori);
}
void conectar(char *destino, char *origem){

    while (*destino != '\0'){
        destino++;
    }

    while (*origem != '\0'){
        *destino = *origem;
        destino++;
        origem++;
    }

    *destino = '\0';
}
