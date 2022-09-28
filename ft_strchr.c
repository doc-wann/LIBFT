/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:29:20 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/28 19:34:11 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	count;

	while (c > 255)
		c = c - 256;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == c)
			return ((char *)str + count);
		count++;
	}
	if (c == 0)
		return ((char *)str + count);
	return (NULL);
}
