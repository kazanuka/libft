#include "libft.h"
#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
    size_t	size;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, *(s1 + size)))
		size--;
	str = ft_substr((char *)s1, 0, size + 1);//0 is start index, s1 ve size'ı kendi isteklerime göre degistirdim.
	return (str);
}
//METODLARDAN DOLAYI KOD WINDOWSDA ÇALIŞMIYOR. 42'DE MUTLAKA KONTROL ET.
/*
int main(void)
{
    char *s1 = "   Hello, World!   ";
    char *set = " ";
    char *result;

    // Başta ve sonda boşlukları kırpma testi
    result = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, result);
    free(result); // Bellek sızıntısını önlemek için.

    // Sadece baştaki boşlukları kırpma testi
    s1 = "****Hello, World!****";
    set = "*";
    result = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, result);
    free(result);

    // Başta ve sonda özel karakterleri kırpma testi
    s1 = "xyzHello, World!xyz";
    set = "xyz";
    result = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, result);
    free(result);

    // Kırpacak bir şey yok testi
    s1 = "Hello, World!";
    set = " ";
    result = ft_strtrim(s1, set);
    printf("Original: '%s'\nTrimmed: '%s'\n\n", s1, result);
    free(result);

    return 0;
}
*/