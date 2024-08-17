void *ft_memset (void *s, int c, unsigned int n)
{
    unsigned char *p = (unsigned char *)s;

    int i;
    i = 0;
    while(i < n)
    {
        *p++;
        *p = c;
        i++;
    }
    return s;
}