/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:49:03 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/04 20:08:58 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_char_set(char *str, char *set)
{
	int	i;
	int	cnt;
	int	len;

	i = 0;
	cnt = 0;
	len = ft_strlen(str);
	while (set[i])
	{
		if (set[i] == str[i])
			cnt++;
		i++;
	}
	while (set[len])
	{
		if (set[len] == str[len])
			cnt++;
		len++;
	}
	return (cnt);
}

char	*ft_trim_fist(char const *s1, char const *set, int i, int j)
{
	char * str;

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
	return (str);
}

char	*ft_trim_last(char const *s1, char const *set, int k, int l)
{
	char	*str;

	str = s1;
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
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	l = ft_strlen(s1);
	str = ft_strdup(s1);
	str = malloc(sizeof (char) * ft_count_char_set(s1, set) + 1);
	str = ft_trim_fist(s1, set, i, j);
	str = ft_trim_last(s1, set, k, l);
	return (str);
}
