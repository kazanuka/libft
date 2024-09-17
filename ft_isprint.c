#include "libft.h"
int ft_isprint(int c)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    if  ((c   >=  0 && c <=   31) )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

#include <ctype.h>
#include <stdio.h>
int main()
{
    char c = '0';
   printf("%d",ft_isprint(c));
   return 0;
}
