/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:59:34 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 18:16:37 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int		i;
	int		j;
	int		n2;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	n2 = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		str[i] = '-';
		i++;
	}
	while (n2 > 9)
	{
		n2 /= 10;
		j++;
	}
	size = i + j;
	str = malloc(sizeof (char) * (size) + 1);
	while (i < j)
	{
		str[i + j] = n % 10 + 48;
		n /= 10;
		j--;
	}
	str[i] = '\0';
	return (str);
}
