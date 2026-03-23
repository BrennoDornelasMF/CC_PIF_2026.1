#include <stdio.h>
#include<string.h>

void paraMaiusculo(char *str);

int main(){

    char str[100];

    fgets(str,99,stdin);

    paraMaiusculo(str);

    printf("%s" ,str);
}

void paraMaiusculo(char *str){
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        str++;
    }
    
}
