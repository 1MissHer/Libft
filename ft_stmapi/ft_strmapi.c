/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:46:23 by lillopez          #+#    #+#             */
/*   Updated: 2024/12/02 16:51:20 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	s1;
	int		i;

	str = s;
	s1 = *f;
	i = 0;
	if (*f == 0)
	{
		return (0);
	}
	if (*f == s1)
	{
		while (s[i])
		{
			str[i] = s1;
			i++;
		}
	}
	return (str);
}