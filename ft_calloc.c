/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:43:35 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/07 17:37:55 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*address;

	if (count == 0 || size == 0)
		return (NULL);
	address = malloc (count * size);
	if (address == NULL)
		return (NULL);
	ft_memset(address, 0, count * size);
	return (address);
}
