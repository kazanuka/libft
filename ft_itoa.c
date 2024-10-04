#include "libft.h"
/*
#include <stdio.h>
#include <stdint.h>
*/
int ft_count_digits(int n) {
    int count = 0;

    if (n < 0) {
        n = -n;
        ++count;
    }

    if (n == 0)
        return 1;

    while (n != 0) {
        n = n / 10;
        ++count;
    }

    return count;
}



char *ft_itoa(int n)
{
    char	*address;
	int		count;

	count = ft_count_digits(n);
	address = malloc(sizeof(char)*(count + 1));
	if (NULL == address)
		return (NULL);
	address[count] = '\0';
	if (0 == n)
		address[0] = '0';
	else if (n < 0)
		address[0] = '-';
	while (n)
	{	
		if (n < 0)
			address[--count] = (~(n % 10) + 1) + 48;
		else
			address[--count] = (n % 10) + 48;
		n = n/10;
	}	
	return (address);
}


/*
int main()
{
  char *str = ft_itoa(-2134);
  printf("%s\n", str);

  str = ft_itoa(42);
  printf("%s\n", str);
  str = ft_itoa(707);
  printf("%s\n", str);

  str = ft_itoa(INT32_MIN);
  printf("%s\n", str);

  str = ft_itoa(INT32_MAX);
  printf("%s\n", str);
  
  str = ft_itoa(0);
  printf("%s\n", str);

  return 0;
}
*/