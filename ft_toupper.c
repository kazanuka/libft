#include "libft.h"
int ft_toupper(char c)
{
    if(c >= 97 && c <= 122)
    {
        c -= 32;
    }
    return c;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str = 'a';
    printf("%c",ft_toupper(str));
    return 0;
}