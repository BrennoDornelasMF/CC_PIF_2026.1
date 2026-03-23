#include <stdio.h>
#include <string.h>

int subString(char *str, char *subString);

int main(){

    char str[100];
    char sub[100];

    fgets(str,99,stdin);
    fgets(sub,99,stdin);

    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    int resu = subString(str,sub);

    printf("%d\n", resu);
}

int subString(char *str, char *subString){
/*
    size_t tam_subString = strlen(subString);

    while (*str != '\0')
    {
        int i;
        for (i = 0; i < tam_subString ; i++)
        {
            if (str[i] == '\0' || str[i] != subString[i])
            {
                break;
            }

        }
        if (i == tam_subString)
        {
                return 1;
        }
                        
        str++;
    }
    return 0;
*/

    if (strstr(str,subString) != NULL)
    {
        return 1;
    }else
    {
        return 0;
    }
    

    

}

