#include<stdio.h>
#include<string.h>

void conta_caracteres(char *str, int *vogais, int *consoantes);



int main(){
    char str[10];
    int vog = 0;
    int cons = 0;

    fgets(str,9,stdin);

    conta_caracteres(str, &vog, &cons);
    
    printf("vogais: %d\n", vog);
    printf("Consoantes: %d", cons);

    return 0;
}


void conta_caracteres(char *str, int *vogais, int *consoantes){

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
           if(*str != 'a' && *str != 'e' && *str != 'i' && *str != 'o' && *str != 'u')
            {
                (*consoantes)++;
            } else
            {
                (*vogais)++;
            } 
        }
        str++;
                
    }

    

}