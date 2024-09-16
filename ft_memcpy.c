#include <stdio.h>
#include <string.h>
void* ft_memcpy (void *dest, const void *src, unsigned int n)
{
    unsigned char *p = (unsigned char*)src;
    unsigned char *q = (unsigned char*)dest;
    while   (n--)
    {
        q[n] = p[n];
    }
    return dest;
}

int main()
{
    char *s = "furkan";
    char *z = "kuyumcu";
    ft_memcpy(&z,&s,5);

    printf("%s\n",z);
    return 0;
}