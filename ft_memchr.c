/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:27:29 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/15 19:13:47 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	s;
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)str;
	s = (char)c;
	while (i < n)
	{
		if (*s1 == s)
			return (s1);
		s1++;
		i++;
	}
	return (NULL);
}
