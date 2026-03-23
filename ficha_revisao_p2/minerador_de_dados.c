#include <stdio.h>
#include<string.h>

int extrai_digitos(char *origem,char* destino );

int main(){

    char str[100];
    char des[100];



    fgets(str,99,stdin);

    int resu = extrai_digitos(str,des);

    printf("%s\n" ,str);
    printf("%s\n", des);
    printf("%d\n", resu);
}

int extrai_digitos(char *origem,char* destino ){
    int quant = 0;

    while (*origem != '\0')
    {
        if(*origem >= '0' && *origem <= '9'){
            *destino = *origem;
            quant++;
            destino++;
        }
        origem++;
    }
    *destino = '\0';
    return quant;

}
