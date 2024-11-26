/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:59:34 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/26 15:53:12 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int i;
	int j;
	int size;
	char *str;

	i = 0;
	j = 0;
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
	size = j + i;
	malloc(sizeof (char) * (size) + 1);
	while (i < j)
	{
		str[i + j] = n % 10 + 48;
		j--;
	}
	str[i] = '/0';
	return (str);
}
