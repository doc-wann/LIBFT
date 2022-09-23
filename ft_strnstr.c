/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:31:19 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/23 20:44:27 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t	i;
	size_t	j;

	if (lil[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == lil[j]) && (i + j) < len)
		{
			if (lil[j + 1] == '\0')
				return ((char *)(&big[i]));
			j++;
		}
		i++;
	}
	return (NULL);
}
