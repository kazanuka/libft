#include <stdio.h>
void    *memcpy (void *dest, const void *src, unsigned int n)
{
    unsigned char *p = (unsigned char*)src;
    unsigned char *q = (unsigned char*)dest;
    while   (n--)
    {
        p[n] = q[n];
    }
    return &dest;
}

int main()
{
    char *s = "furkan";
    char *z = "kuyumcu";
    memcpy(&z,&s,5);

        // Buffer içerisindeki her bir karakteri kontrol et ve yazdır
    for (int i = 0; i < sizeof(z); i++) {
        printf("%d ", z[i]);  // Her bir karakterin ASCII değerini yazdır
    }
    printf("\n");
    return 0;
}