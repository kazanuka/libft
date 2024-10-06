#include "libft.h"
#include <unistd.h> 

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}




/*
#include <fcntl.h>  
#include <unistd.h> 
#include "libft.h"  

int main(void)
{
    ft_putchar_fd('T', 1); 
    ft_putchar_fd('\n', 1); 

    return 0;
}
*/

