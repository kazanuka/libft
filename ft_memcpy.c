/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:00:48 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/09 16:45:32 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	if(!dest || !src)
		return NULL;
	
	p = (unsigned char *) src;
	q = (unsigned char *) dest;
	while (n--)
	{
		q[n] = p[n];
	}
	return (dest);
}
