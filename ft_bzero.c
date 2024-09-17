#include <stdio.h>
#include <string.h>
#include "libft.h"
//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
void    ft_bzero(void *s, unsigned int n)
{
    int i;
    i = 0;
     unsigned char *p = s;
    while(i < n)
    {
        
        *p++ = '\0';
        i++;
    }
}

int main()
{
    char z[] = "kuyumcu";
    ft_bzero(z, 3);  // İlk 3 karakteri sıfırlar
    
    printf("%s", z);  // Sonuç: "umcu" olacaktır
    return 0;
}
