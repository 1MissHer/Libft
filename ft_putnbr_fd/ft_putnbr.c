/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:31:44 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 15:44:21 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putnbr_fd(int n, int fd)
{
	fd = open(ft_putnbr_fd, n);
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		close(fd);
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n > 0 && n < 9)
	{
		write(fd, &n, 1);
		return (0);
	}
	if (n == n)
		close (fd);
}