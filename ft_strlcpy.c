#include "libft.h"  // standart header file for size_t

size_t ft_strlcpy(char *dest, const char *src, size_t maxlen)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    int srcSize = ft_strlen(src);
    if(srcSize + 1 > maxlen)
        ft_memcpy(dest,src,srcSize + 1);
    else if(maxlen != 0)
    {
        ft_memcpy(dest,src,maxlen -1);
        dest[maxlen-1] = '\0';
    }
    return srcSize;
}

