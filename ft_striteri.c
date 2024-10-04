#include "libft.h"

void ft_striteri(char *s, void  (*f)(unsigned int,  char*))
{
    size_t i;
    i = 0;

    if(!s)
        return  ;

    while(s[i])
    {
        f(i,   &s[i]);
        i++;
    }
}



/*
#include <ctype.h>  
#include <string.h> 
#include <stdio.h>
// Her karakteri büyük harfe çeviren bir fonksiyon
void to_uppercase(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;  // Küçük harfi büyük harfe çevir
    // İndex değerini kullanmak zorunda değiliz, ama fonksiyon imzasına uygun olmalı
}

int main()
{
    char str[] = "hello world!";  // Denenecek string

    printf("Original String: %s\n", str);

    // ft_striteri ile stringdeki her karakteri to_uppercase fonksiyonu ile değiştirelim
    ft_striteri(str, to_uppercase);

    printf("Modified String: %s\n", str);

    return 0;
}
*/