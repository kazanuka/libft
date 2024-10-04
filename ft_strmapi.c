#include "libft.h"
#include <stdio.h>
#include <string.h> 
//neden i değerini de fonksiyona gönderiyoruz?
char    *ft_strmapi(char   const   *s, char (*f)(unsigned int, char))
{
    char    *address;
    size_t len;
    size_t i;
    len = /*ft_*/strlen(s);
    address = malloc(sizeof(char)*(len + 1));
    i = 0;

    if(!address)
        return (NULL);

    while(i <   len)
    {
        address[i] = f(i,s[i]);
        i++;
    }
    address[i] = '\0';
    return address;

}


/*


char to_uppercase(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;  // Küçük harfi büyük harfe çevir
    return c;
}

int main()
{
    char *str = "hello world!";
    char *result;

    // ft_strmapi ile her karakteri 'to_uppercase' fonksiyonuna gönderiyoruz
    result = ft_strmapi(str, to_uppercase);

    if (result)
    {
        printf("Original String: %s\n", str);
        printf("Modified String: %s\n", result);
        free(result);  // Belleği serbest bırak
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/