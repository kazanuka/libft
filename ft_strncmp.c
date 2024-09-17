#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    int i;
    i = 0;
    while(n && s1[i] && s2[i])
    {
        if(s1[i] == s2[i])
        {
            i++;
            n--;
        }
        else return(s1[i]-s2[i]);  
    }
    if(n==0) return 0;
    return (s1[i]-s2[i]);
}
/*
TEST KODU
int main()
{
    // Test 1: İki aynı string (tam karşılaştırma)
    const char *str1 = "hello";
    const char *str2 = "hello";
    int result = ft_strncmp(str1, str2, 5);
    int res = strncmp(str1,str2,5);
    printf("Test 1 (hello, hello, 5): %d %d\n", result,res);  // Beklenen: 0

    // Test 2: Farklı stringler
    str1 = "hello";
    str2 = "world";
    result = ft_strncmp(str1, str2, 5);
    res = strncmp(str1,str2,5);
    printf("Test 2 (hello, world, 5): %d %d\n", result,res);  // Beklenen: negatif bir değer

    // Test 3: Kısmi karşılaştırma (ilk n karakter)
    str1 = "hello";
    str2 = "helium";
    result = ft_strncmp(str1, str2, 3);
    res = strncmp(str1,str2,3);
    printf("Test 3 (hello, helium, 3): %d %d\n", result,res);  // Beklenen: 0 (ilk 3 karakter aynı)

    // Test 4: İki aynı string (kısmi karşılaştırma)
    str1 = "hello";
    str2 = "hello";
    result = ft_strncmp(str1, str2, 2);
    res = strncmp(str1,str2,2);
    printf("Test 4 (hello, hello, 2): %d %d\n", result,res);  // Beklenen: 0 (ilk 2 karakter aynı)

    // Test 5: Biri kısa, biri uzun string
    str1 = "hi";
    str2 = "hello";
    result = ft_strncmp(str1, str2, 5);
    res = strncmp(str1,str2,5);
    printf("Test 5 (hi, hello, 5): %d  %d\n", result,res);  // Beklenen: negatif bir değer (farklı uzunluk)

    // Test 6: strncmp ile karşılaştırma
    str1 = "abcdef";
    str2 = "abcdez";
    result = ft_strncmp(str1, str2, 5);
    int std_result = strncmp(str1, str2, 5);  // Standart strncmp ile karşılaştırma
    printf("Test 6 (abcdef, abcdez, 5): ft_strncmp: %d, strncmp: %d\n", result, std_result);  // Beklenen: 0

    return 0;
}
*/

