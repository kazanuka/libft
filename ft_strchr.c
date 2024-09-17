#include "libft.h"
#include <string.h>
#include <stdio.h>
char *ft_strchr(const char *s,int c)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    unsigned int len;
    unsigned int i;
    len = ft_strlen(s); //ft_strlen tanımlanmıyor. bunu çöz
    i = 0;
    while(i < len)
    {
        if(s[i] == c)
        {
        char* x = (char*)&s[i];
        return x;
        }
        i++;
    }
    return '\0';
}