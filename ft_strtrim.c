/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:03 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 16:33:05 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_count_char_set(char *str, char *set)
{
	int i;
	int len;
	int count;

	i = 0;
	len = ft_strlen(str);
	count = 0;
	while (set[i])
	{
		if (set[i] == str[i])
			count++;
		i++;
	}
	while (set[len])
	{
		if (set[len] == str[len])
			count++;
		len++;
	}
	return (i + len);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	char *str;

	i = 0;
	j = 0;
	k = 0;
	l = ft_strlen(s1);
	m = ft_count_char_set(s1, set);
	str = ft_strdup(s1);
	str = malloc(sizeof (char) * m + 1);
	str = s1;
	while (set[j])
	{
		if (set[j] == str[i])
		{
			while (set[j] == str[i])
				i++;
		}
		j++;
	}
	while (set[k])
	{
		if (set[k] == str[l])
		{
			while (set[k] == str[l])
				l--;
		}
		k++;
	}
	return (str);
}