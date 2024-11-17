/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:44:13 by lillopez          #+#    #+#             */
/*   Updated: 2024/11/17 14:16:32 by lillopez         ###   ########.fr       */
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
int	ft_atoi(const char *nptr);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void bzero(void *s, size_t n);
int	toupper(int c);
int	ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);

#endif