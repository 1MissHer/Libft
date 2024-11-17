/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:18:22 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/17 17:20:15 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_calloc(size_t nmeb, size_t size)
{
	int	len;

	ft_bzero(nmeb, size);
	len = ft_strlen(nmeb);
	malloc(sizeof (char) * len);
}
