#include "libft.h" 
int ft_isascii(int c)
{
    if  ((c   >=  0 && c <=   127))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    char c = 'ş';
   printf("%d",isascii(c));
   return 0;
}
