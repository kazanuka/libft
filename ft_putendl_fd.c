/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkuyumcu <fkuyumcu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:00:59 by fkuyumcu          #+#    #+#             */
/*   Updated: 2024/10/13 14:04:25 by fkuyumcu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char	*s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write (fd, s, 1);
		++s;
	}
	write (fd, "\n", 1);
}
