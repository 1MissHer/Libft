/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:50:09 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/15 16:51:10 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c - 32;
	return (c);
}