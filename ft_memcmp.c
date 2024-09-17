#include "libft.h"
//strcmp'den farklı olarak bütün belleği alır. null değer gördüğünde durmaz 
int ft_memcmp(const void *s1, const void *s2, size_t n)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    unsigned char *p = (char*)s1;
    unsigned char *q = (char*)s2;
    int i;
    i = 0;
    while(n--)
    {
        if(p[i] == q[i])
        {
            i++;
        }
        else
        return p[i] - q[i];
    }
    return 0;
}
/*
TEST KODU
#include <stdio.h>
#include <string.h>
int main()
{
    // Test string'ler
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, Coder!";
    
    // ft_memcmp ile karşılaştırmalar
    int result1 = ft_memcmp(str1, str2, 13); // 13 karakter karşılaştırılacak
    int result2 = memcmp(str1, str3, 13); // 13 karakter karşılaştırılacak
    int result3 = ft_memcmp(str1, str3, 7);  // İlk 7 karakteri karşılaştır
    
    // Sonuçları yazdırma
    printf("str1 vs str2: %d\n", result1);  // Sonuç: 0 (aynı)
    printf("str1 vs str3: %d\n", result2);  // Sonuç: pozitif/negatif değer (fark var)
    printf("str1 vs str3 (first 7 chars): %d\n", result3); // Sonuç: 0 (ilk 7 karakter aynı)

    return 0;
}
*/