/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:54:44 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/15 15:06:19 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s1;
	int i;

	d = (unsigned char *)dest;
	s1 = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s1[i];
		i++;
	}
	return (dest);
}