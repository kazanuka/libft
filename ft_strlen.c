#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    const char *str = "hello";
    printf("Length of the string: %zu\n", ft_strlen(str));
    return 0;
}