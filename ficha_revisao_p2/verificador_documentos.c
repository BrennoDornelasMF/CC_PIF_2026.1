#include <stdio.h>
#include<string.h>

int compara_sufixo(char *str, char *sufixo);

int main(){

    char str[50];
    char suf[50];

    fgets(str,49,stdin);
    fgets(suf,49,stdin);

    int resultado = compara_sufixo(str,suf);
    
    printf("%d", resultado);

}

int compara_sufixo(char *str, char *sufixo){
    while (*str != '\0')
    {
        str++;
    }
    str--;

    int tam_sufixo=0;

    while (*sufixo != '\0')
    {
        tam_sufixo++;
        sufixo++;
    }
    sufixo--;

    for (int i = 0; i < tam_sufixo; i++)
    {
        if(*str != *sufixo){
            return 0;
        }
        str--;
        sufixo--;
    }
    return 1;
    
}
