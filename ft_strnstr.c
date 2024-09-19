#include "libft.h"

//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
char *ft_strnstr(const char *haystack,	const char *needle, size_t len)//len stands for haystack length
{
    size_t n;
    size_t i;
    n = ft_strlen(needle); //n stands for length of needle
    i = 0;
    if(!*needle)
        return (char*)haystack;
    while(haystack[i] && i + n <= len)
    {
        if(haystack[i] == *needle && ft_strncmp(&haystack[i],needle,n) == 0)
            return (char*)&haystack[i];
        i++;
    }
    return NULL;
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    const char *haystack = "Merhaba dünya!";
    const char *needle1 = "dünya";
    const char *needle2 = "Merhaba";
    const char *needle3 = "!";
    const char *needle4 = "deneme";
    const char *needle5 = "";
    size_t len = 15;

    // Test 1: "dünya" araması
    char *result1 = ft_strnstr(haystack, needle1, len);
    if (result1)
        printf("Test 1 geçti: Bulunan: '%s'\n", result1);
    else
        printf("Test 1 başarısız: Bulunamadı\n");

    // Test 2: "Merhaba" araması
    char *result2 = ft_strnstr(haystack, needle2, len);
    if (result2)
        printf("Test 2 geçti: Bulunan: '%s'\n", result2);
    else
        printf("Test 2 başarısız: Bulunamadı\n");

    // Test 3: "!" araması
    char *result3 = ft_strnstr(haystack, needle3, len);
    if (result3)
        printf("Test 3 geçti: Bulunan: '%s'\n", result3);
    else
        printf("Test 3 başarısız: Bulunamadı\n");

    // Test 4: "deneme" araması
    char *result4 = ft_strnstr(haystack, needle4, len);
    if (result4)
        printf("Test 4 başarısız: Bulunan: '%s'\n", result4);
    else
        printf("Test 4 geçti: 'deneme' bulunamadı, doğru sonuç\n");

    // Test 5: Boş needle
    char *result5 = ft_strnstr(haystack, needle5, len);
    if (result5 == haystack)
        printf("Test 5 geçti: Boş needle için doğru sonuç: '%s'\n", result5);
    else
        printf("Test 5 başarısız: Hatalı sonuç\n");

    return 0;
}
*/