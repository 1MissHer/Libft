/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:45:11 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/17 15:00:30 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int j;

	j = 0;
	i = 0;
	while (big[i] && little[j] && little[j] <= len )
	{
		while (little[j] == big[i + j])
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