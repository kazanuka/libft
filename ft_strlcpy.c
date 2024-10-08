/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:30 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 19:37:41 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // standart header file for size_t

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (srcsize + 1 > n)
		ft_memcpy(dest, src, srcsize + 1);
	else if (n != 0)
	{
		ft_memcpy(dest, src, n - 1);
		dest[n - 1] = '\0';
	}
	return (srcsize);
}
