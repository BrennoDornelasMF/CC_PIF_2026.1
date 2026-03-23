#include<stdio.h>
#include<string.h>

int comprimento(char *str);

int main(){
    char str[100];
  

    fgets(str,99,stdin);

    int resultado = comprimento(str);
    printf("%d" , resultado);

    return 0;
}

int comprimento(char *str){
    int i = 0;

    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i - 1 ;
}
