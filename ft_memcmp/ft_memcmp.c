/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:52:01 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/16 15:58:39 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *s1bis;
	unsigned char *s2bis;

	s1bis = ((unsigned char *)s1);
	s2bis = ((unsigned char *)s2);
	i = 0;
	while (i < n && s1bis[i] == s2bis[i])
	{
		i++;
	}
	return ((int)s1bis[i] - (int)s2bis[i]);
}