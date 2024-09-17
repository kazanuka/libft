#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    const unsigned char *p = (const unsigned char *)s;
    while(n--)
    {
        if (*p == c)  
            return (void *)p;
        p++;  
    }
    return NULL;
}
/*
TEST KODU
int main()
{
    // Test 1: Karakter dizi içinde var
    const char str[] = "hello world";
    char c = 'w';
    char *result = memchr(str, c, strlen(str));
    if (result != NULL)
        printf("Test 1: '%c' karakteri bulundu: %s\n", c, result);
    else
        printf("Test 1: '%c' karakteri bulunamadı\n", c);

    // Test 2: Karakter dizi içinde yok
    c = 'z';
    result = memchr(str, c, strlen(str));
    if (result != NULL)
        printf("Test 2: '%c' karakteri bulundu: %s\n", c, result);
    else
        printf("Test 2: '%c' karakteri bulunamadı\n", c);

    // Test 3: İlk n karakter içinde bulunmayan karakter
    c = 'w';
    result = memchr(str, c, 5);  // İlk 5 karakteri kontrol edeceğiz
    if (result != NULL)
        printf("Test 3: '%c' karakteri bulundu: %s\n", c, result);
    else
        printf("Test 3: '%c' karakteri ilk 5 karakterde bulunamadı\n", c);

    // Test 4: İlk karakteri bulma
    c = 'h';
    result = memchr(str, c, strlen(str));
    if (result != NULL)
        printf("Test 4: '%c' karakteri bulundu: %s\n", c, result);
    else
        printf("Test 4: '%c' karakteri bulunamadı\n", c);

    // Test 5: Orijinal memchr ile karşılaştırma
    const char str2[] = "test string";
    c = 's';
    result = ft_memchr(str2, c, strlen(str2));
    char *std_result = memchr(str2, c, strlen(str2));  // Standart memchr ile karşılaştırma
    if (result == std_result)
        printf("Test 5: ft_memchr ve memchr aynı sonuçları döndürdü\n");
    else
        printf("Test 5: ft_memchr ve memchr farklı sonuçlar döndürdü\n");

    return 0;
}
*/