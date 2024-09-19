#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int res;
    res = 0;
    i = 0;
    sign = 1;
     while (nptr[i] == ' ')
        i++;
    if(nptr[i]  == '-')
    {
        sign = -1;
        i++;
    }
    else if(nptr[i] == '+')
        i++;
    while(nptr[i])
    {
        if(nptr[i]  <   '0' || nptr[i] > '9')
            return 0;
        res = res * 10 + (nptr[i] - '0');
        i++;
    }
    return sign*res;
}