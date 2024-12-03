/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:52:01 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 18:13:30 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
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