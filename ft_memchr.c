/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:13:48 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 18:36:43 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *s1;
	unsigned char c1;

	c1 = ((unsigned char )c);
	s1 = ((unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (c1 == s1[i])
			return (s + i);
		i++;
	}
	if (s1 == c1)
		return (s1 + i);
	return (0);
}