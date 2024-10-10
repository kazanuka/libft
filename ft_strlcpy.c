/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:30 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/09 19:19:02 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // standart header file for size_t

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	srcsize;

	if (!dest || !src)
		return (0);
	srcsize = ft_strlen(src);

	if(n > 0)
	{
		if (srcsize < n)
			ft_memcpy(dest, src, srcsize + 1);
		else
		{
			ft_memcpy(dest, src, n - 1);
			dest[n - 1] = '\0';
		}
	}	
	return (srcsize);
}
