/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:44:13 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/15 15:08:03 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *str);
void	*memmove(void *dest, const void *src, size_t n);





#endif