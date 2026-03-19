#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int i =0;
    char ch = getchar();

    int numeros = 0;
    int especiais = 0;
    int letras = 0;



    while (ch != '\n' && i < 50)
    {
        if(ch == 'a' || ch == 'e' || ch == 'o' || ch == 'u')
        {
            ch = 'i';
            letras++;
        }if(ch == 'A' || ch == 'E' || ch == 'O' || ch == 'U')
        {
            ch = 'I';
            letras++;
        }else if(ch >= '0' && ch <= '9')
        {
            numeros++;
        }else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letras++;
        }else{
            especiais++;
        }

        str[i] = ch;
        i++;
        ch = getchar();

    }
    str[i] = '\0';
    printf("%s\n",str);
    printf("Nº de letras: %d\n", letras);
    printf("Nº de numeros: %d\n", numeros);
    printf("Nº de especiais : %d\n", especiais);

}