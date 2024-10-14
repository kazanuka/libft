/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:00:19 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/13 21:29:32 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		++count;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = (n / 10);
		++count;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*address;
	int		count;

	count = ft_count_digits(n);
	address = malloc(sizeof(char) * (count + 1));
	if (NULL == address)
		return (NULL);
	address[count] = '\0';
	if (n == 0)
		address[0] = '0';
	else if (n < 0)
		address[0] = '-';
	while (n)
	{
		if (n < 0)
			address[--count] = (~(n % 10) + 1) + 48;
		else
			address[--count] = (n % 10) + 48;
		n = (n / 10);
	}
	return (address);
}
