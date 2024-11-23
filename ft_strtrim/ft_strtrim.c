/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:03 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/23 15:02:56 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_charset(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	char *str;

	i = 0;
	while (s1[i])
	{
		if (ft_charset(set, s1[i]) == 0)
			return (str);
		i++;
	}
	return (0);
}