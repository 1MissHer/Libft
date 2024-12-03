/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:49:54 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 18:26:38 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	int	i;

	i = 0;
	if (fd < 0)
		return (0);
	while (fd > i)
	{
		write(fd, &c, 1);
		i++;
	}
	return ;
}
