#include "libft.h"//bir kere daha kontrol et, strlen tanımlı değl.
#include <string.h>

char *ft_strrchr(const char *s, int c)//Metodda kullanılan değişken isimlerini tekrar kontrol et! BSD'nin manuel sayfasından alındı.
{
    unsigned int len;
    unsigned int i;
    len = ft_strlen(s); //ft_strlen tanımlanmıyor. bunu çöz
    i = 0;
    char* tmp;
    tmp = NULL;
    while(i < len)
    {
        if(s[i] == c)
        {
        tmp = (char*)&s[i];
        }
        i++;
    }
    return tmp;
}


/*
MAIN FOR TESTING
#include <stdio.h>
int main() {
    const char *str = "Hello, world!";
    char c = 'o';
    
    // strrchr fonksiyonunu çağır
    char *result = ft_strrchr(str, c);
    
    // Sonuçları ekrana yazdır
    if (result) {
        printf("Karakter '%c' son olarak '%s' dizisinde bulundu.\n", c, result);
    } else {
        printf("Karakter '%c' dizide bulunamadı.\n", c);
    }
    
    return 0;
}

*/