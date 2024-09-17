#include "libft.h"
void *ft_memset (void *s, int c, unsigned int n)
{
    unsigned char *p = (unsigned char *)s;

    int i;
    i = 0;
    while(i < n)
    {
        *p++ = c;
        i++;
    }
    return s;
}

#include <stdio.h>
#include <string.h>

int main()
{
    // Bir char dizisi tanımla
    char buffer[20];
    
    // Diziyi 'A' karakteri ile doldur
    ft_memset(buffer, 'a', sizeof(buffer) - 1); // Sonunda null karakter için -1
    buffer[sizeof(buffer) - 1] = '\0'; // Dizinin sonuna null karakter ekle
    
    // Dizinin içeriğini yazdır
    printf("Dizinin içeriği: %s\n", buffer);
    
    return 0;
}
