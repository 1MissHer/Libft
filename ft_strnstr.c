/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:45:11 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 18:35:40 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int j;

	if (!little[0])
		return (big);
	i = 0;
	while (big[i] && little[j] && j <= len )
	{
		j = 0;
		while (big[i + j] && little[j] == big[i + j])
		{
			if (!(little[j]))
			{
				return (&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// aab
// aaabc