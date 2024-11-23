/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:05:00 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/23 15:13:55 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_checkchar(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **result;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (ft_checkchar(s, c) == 0)
		{
			result[j][k] == s[i];
			j++;
		}
		i++;
	}
	return (result);
}