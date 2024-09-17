#include "libft.h"
int ft_tolower(char c)
{
    if(c >= 65 && c <= 90)
    {
        c += 32;
    }
    return c;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str = 'a';
    printf("%c",ft_tolower(str));
    return 0;
}