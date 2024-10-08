/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:54:27 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 18:08:43 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	int				i;

	p = (unsigned char *) s1;
	q = (unsigned char *) s2;
	i = 0;
	while (n--)
	{
		if (p[i] == q[i])
		{
			i++;
		}
		else
			return (p[i] - q[i]);
	}
	return (0);
}
