/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:48 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 19:54:07 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	unsigned int	i;
	char			*tmp;

	len = ft_strlen(s);
	i = 0;
	tmp = NULL;
	while (i <= len)
	{
		if (s[i] == (char)c)
		{
			tmp = (char *)&s[i];
		}
		i++;
	}
	return (tmp);
}
