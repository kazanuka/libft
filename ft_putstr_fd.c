#include "libft.h"
#include <unistd.h> 

void	ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return ;

	while(*s)
    {
        write(fd,s,1);
        ++s;
    }
}



/*
#include <fcntl.h>  

int main(void)
{
    ft_putstr_fd("Selam\n", 1); 

    return 0;
}
*/