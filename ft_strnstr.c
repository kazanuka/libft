/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:44 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/11 15:49:03 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;

	n = ft_strlen(needle);
	i = 0;
	if (! *needle)
		return ((char *)haystack);
	while (haystack[i] && i + n <= len)
	{
		if (haystack[i] == *needle && ft_strncmp(&haystack[i], needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
