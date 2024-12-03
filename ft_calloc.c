/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:18:22 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/03 08:39:45 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
	return ;
}

//void	*ft_calloc(size_t nmeb, size_t size)
{
	size_t	len;

	ft_bzero(nmeb, size);
	len = ft_strlen(nmeb);
	malloc(sizeof (char) * len);
}
