void bzero(void *s, unsigned int n)
{
    int i;
    i = 0;
     unsigned char *p = s;
    while(i < n)
    {
        *p++;
        *p = '\0';
        i++;
    }
}