/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:26 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 19:35:05 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dstsize;
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	dstsize = ft_strlen(dst);
	i = 0;
	if (n <= dstsize)
		return (n + srcsize);
	while (src[i] && (dstsize + i + 1) < n)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
