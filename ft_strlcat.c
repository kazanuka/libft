#include "libft.h"  
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)//size stands for maximum size of destination
{
	unsigned int	i;
	unsigned int	j;
    //i is for index of destination and j is for index of source
	i = 0;
	j = 0;
	while (dst[i] && i < size)
        i++;
    //at the end of this block, we measured the length of dest buffer. the function below is to determine if there's a space for nul-termination. if not, skip copying.
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (ft_strlen(dst));
    //return the final length of destination.
}

/*
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "World!";
    size_t size = sizeof(dest);  // Destin toplam boyutu
    size_t result;

    printf("Before strlcat:\n");
    printf("Destination: '%s'\n", dest);
    printf("Source: '%s'\n", src);

    // ft_strlcat fonksiyonunu test et
    result = ft_strlcat(dest, src, size);

    printf("\nAfter strlcat:\n");
    printf("Destination: '%s'\n", dest);
    printf("Total length (return value): %zu\n", result);

    return 0;
}
*/