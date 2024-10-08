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
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] && i < n)
		i++;
	while (src[j] && (i + j + 1) < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < n)
		dst[i + j] = '\0';
	return (ft_strlen(dst));
}
