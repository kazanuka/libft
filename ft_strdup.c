#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
    char *adress;
    adress = malloc(strlen(s)+1);
    if(adress == NULL)
        return NULL;
    ft_memcpy(adress,s,strlen(s)+1);
    return adress;
}
/*
int main() {
    const char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);
    
    if (duplicate == NULL) {
        return 1;
    }
    
    printf("Orijinal: %s\n", original);
    printf("Kopya: %s\n", duplicate);
    
    free(duplicate);
    return 0;
}
*/