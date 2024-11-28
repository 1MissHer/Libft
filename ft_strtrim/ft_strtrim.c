/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:03 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/28 14:54:07 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int k;
	int l;
	char *str;

	i = 0;
	j = 0;
	k = 0;
	l = ft_strlen(s1);
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