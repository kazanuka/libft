int ft_isprint(char c)
{
    if  ((c   >=  0 && c <=   31) )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}