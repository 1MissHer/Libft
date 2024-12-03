/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:24:01 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 18:26:19 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (fd < 0)
		return (0);
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	return ;
}