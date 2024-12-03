/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:49:45 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/03 08:32:12 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*str;

	malloc(sizeof (char) * len + 1);
	i = start;
	j = 0;
	while (i == len)
	{
		str[j] == s[i];
		j++;
		i++;
	}
	return (str);
}
