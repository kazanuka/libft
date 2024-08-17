int ft_isalpha(char c)
{
    if  ((c   >=  65 && c <=   90) ||(  c   >=  97 && c  <= 122 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ft_isdigit(char c)
{
    if(c >= 48 && c <=  57)
    {
        return 1;
    }
    return 0;
}


int ft_isalnum(char c)
{
    if(ft_isalpha (c)    ||  ft_isdigit (c)   )
    return 1;
    else
    return 0;
}