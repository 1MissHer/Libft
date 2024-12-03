/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:35:58 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 18:33:43 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int	len;

	len = ft_strlen(dst);
	i =0;
	while (i < size)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	return (size);
}