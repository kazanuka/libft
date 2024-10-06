#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char  *s, int fd)
{
     if(!s)
        return ;

	while(*s)
    {
        write(fd,s,1);
        ++s;
    }
    write(fd,"\n",1);
}

/*
#include <fcntl.h>  

int main(void)
{
    ft_putendl_fd("Selam", 1); 

    return 0;
}

*/
