/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:33:17 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/03 08:20:45 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		fullsize;
	char	*str;

	i = 0;
	j = 0;
	k = ft_strlen(s1);
	fullsize = ft_strlen(s2) + k;
	str = malloc(sizeof (char) * (fullsize) + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + k] = s2[j];
		j++;
	}
	return (str);
}
