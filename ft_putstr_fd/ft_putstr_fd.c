/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:24:01 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 16:55:45 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	fd = open(ft_putstr_fd, str);
	if (fd < 0)
		close (fd);
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	close (fd);
}