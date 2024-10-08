/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:36 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 19:43:14 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*address;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	address = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!address)
		return (NULL);
	while (i < len)
	{
		address[i] = f(i, s[i]);
		i++;
	}
	address[i] = '\0';
	return (address);
}
