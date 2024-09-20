#include "libft.h"
#include <string.h>
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    char *address;
    unsigned int len1;
    unsigned int len2;
    if (!s1 || !s2)
        return NULL;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    address = malloc(len1+len2+1);
    if(!address)
        return NULL;
    ft_memcpy(&address[0],s1,len1);
    ft_memcpy(&address[len1],s2,len2);
    address[len1+len2] = '\0';
    return address;
}
/*
int main() {
    char *str1 = "Furkan ";
    char *str2 = "Kuyumcu";
    char *result;

    result = ft_strjoin(str1, str2);

    if (result) {
        printf("Birleştirilmiş string: %s\n", result);
        free(result);  // Belleği serbest bırakmayı unutma
    }
    else
        printf("Error on memory allocation.");

    return 0;
}
*/