/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:30:23 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/12 22:55:34 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		count;
	int		size;

	count = 0;
	size = 0;
	while (s[size])
		++size;
	str = malloc(sizeof(char) * (size + 1));
	while (s[count])
	{
		str[count] = s[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
