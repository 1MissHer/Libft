/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:49:54 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 15:21:36 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar_fd(char c, int fd)
{
	int	i;

	i = 0;
	fd = open("sortie.c", &c);
	if (fd < 0)
		close(fd);
	while (fd > i)
	{
		write(fd, &c, 1);
		i++;
	}
	close (fd);
}
