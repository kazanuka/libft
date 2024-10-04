#include "libft.h"
#include <stdio.h>
#include <stdlib.h> // malloc, free
#include <string.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int size;
    const char *firstC;
    char *address;
    if (!s) 
        return NULL;

    if (start >= ft_strlen(s))
		return ft_strdup("");//sadece null karakter döndürmesi için.

    size = ft_strlen(s + start);

	if (size < len)
		len = size;

    firstC = &s[start];
    address = (char*)malloc(len+1);
    
    if(address == NULL)
        return NULL;
        
    ft_memcpy(address,firstC,len);
    address[len] = '\0';
    return address;
}

/*
int main(void)
{
    // Test 1: Normal bir substring
    char *str = "Hello, world!";
    char *substr = ft_substr(str, 7, 5); // "world"
    if (substr)
    {
        printf("Test 1 - Substring: %s\n", substr);
        free(substr); // malloc ile ayrılan belleği serbest bırak
    }

    // Test 2: Start dizenin uzunluğundan büyük
    substr = ft_substr(str, 20, 5); // Boş string dönmeli
    if (substr)
    {
        printf("Test 2 - Substring: '%s'\n", substr);
        free(substr);
    }

    // Test 3: Start sıfır ve len büyük
    substr = ft_substr(str, 0, 50); // "Hello, world!" dönmeli
    if (substr)
    {
        printf("Test 3 - Substring: %s\n", substr);
        free(substr);
    }

    // Test 4: Start ve len sınır değerleri
    substr = ft_substr(str, 7, 0); // Boş string dönmeli
    if (substr)
    {
        printf("Test 4 - Substring: '%s'\n", substr);
        free(substr);
    }

    // Test 5: Boş string
    substr = ft_substr("", 0, 5); // Boş string dönmeli
    if (substr)
    {
        printf("Test 5 - Substring: '%s'\n", substr);
        free(substr);
    }

    return 0;
}
*/