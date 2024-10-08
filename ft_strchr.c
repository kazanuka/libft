/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:14 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 19:23:24 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	len;
	unsigned int	i;
	char			*x;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		if (s[i] == c)
		{
			x = (char *) &s[i];
			return (x);
		}
		i++;
	}
	return ("\0");
}
