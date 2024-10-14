/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:00:38 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/13 14:03:36 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		q;

	q = (unsigned char)c;
	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p == q)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
