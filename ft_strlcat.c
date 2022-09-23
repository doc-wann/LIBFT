/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:30:35 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/23 20:34:19 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	res;
	size_t	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (size > dlen)
	{
		res = dlen + slen;
		while (src[i] != '\0' && (dlen + 1) < size)
		{
			dst[dlen] = src[i];
			dlen++;
			i++;
		}
		dst[dlen] = '\0';
	}
	else
		res = size + slen;
	return (res);
}
