/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:59:34 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/04 19:29:16 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_int_to_char(char *str, int n, int i, int j)
{
	if (i < j)
	{
		str[i + j] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		str[i] = '-';
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		j++;
	}
	size = i + j;
	str = malloc(sizeof (char) * (size) + 1);
	while (str = ft_int_to_char(str, n, i, j--))
	str[i] = '\0';
	return (str);
}

