#include<stdio.h>
#include<string.h>

void cifra_cesar(char *str, int deslocamento);



int main(){
    char str[10];
  

    fgets(str,9,stdin);

    cifra_cesar(str,1);

    printf("%s", str);

    return 0;
}

void cifra_cesar(char *str, int deslocamento){
    while (*str != '\0')
    {
        *str = *str + deslocamento;
        str++;
    }
    
}


