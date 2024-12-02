/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:27:44 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 15:31:02 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	fd = open(ft_putendl_fd, s);
	if (fd < 0)
		close(fd);
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	s[i] = "/n";
	close(fd);
}