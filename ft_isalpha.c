#include "libft.h"
//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
int ft_isalpha(char c)
{
    if  ((c   >=  65 && c <=   90) ||(  c   >=  97 && c  <= 122 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
#include <stdio.h>
int main()
{
   printf("%d",ft_isalpha('0'));
   return 0;
}
