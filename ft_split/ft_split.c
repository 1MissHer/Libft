/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:05:00 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 16:15:43 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_check_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int ft_count_word(char *s, char c)
{
	int	i;
	int word;

	i = 0;
	word = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			word++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	return (word);
}

int ft_count_charset(char *s, char c)
{
	int		i;
	int		char_set;

	i = 0;
	char_set = 0;
	while (s[i] == c)
	{
		char_set++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
			{
				char_set++;
				i++;
			}
		}
		i++;
	}
	return (char_set);
}

char *ft_strtrim(char const *s1, char c)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	str = s1;
	if (c == str[i])
	{
		while (c == str[i])
			i++;
	}
	if (c == str[j])
	{
		while (c == str[j])
			j--;
	}
	return (str);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		fullsize;
	char	**result;

	i = 0;
	j = 0;
	k = 0;
	fullsize = ft_CountWord(s, c) + ft_CountCharSet(s, c) + 1;
	result = malloc(sizeof (char *) * fullsize);
	while (s[i])
	{
		if (ft_check_char(s, c) == 0)
		{
			result[j] = ft_strdup(ft_strtrim(s, c));
			j++;
		}
		i++;
	}
	return (result);
}