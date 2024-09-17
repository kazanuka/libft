#include "libft.h"
void* ft_memmove (void *dest, const void *src, unsigned int n)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    unsigned char *p = (unsigned char*)src;
    unsigned char *q = (unsigned char*)dest;
    char temp[n];
    //p defined as source char and q defined as dest char
    while   (n--)
    {
        temp[n] = p[n];
        q[n] = temp[n];
    }
    return dest;
}
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Merhaba";
    char dest[10];
    
    // Üst üste gelme olan durum (memmove kullanılmalıdır)
    ft_memmove(dest, src, sizeof(src)-1);
    printf("dest: %s\n", dest); // Çıktı: Merhaba
    
    return 0;
}