/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:23 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 19:32:02 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*address;
	unsigned int	len1;
	unsigned int	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	address = malloc(len1 + len2 + 1);
	if (!address)
		return (NULL);
	ft_memcpy(&address[0], s1, len1);
	ft_memcpy(&address[len1], s2, len2);
	address[len1 + len2] = '\0';
	return (address);
}
