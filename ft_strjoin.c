/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:11:37 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/15 20:54:47 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		index1;
	int		index2;

	index1 = 0;
	index2 = 0;
	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	while (s1[index1] != '\0')
	{
		result[index1] = s1[index1];
		index1++;
	}
	index2 = index1;
	while (s2[index2 - index1] != '\0')
	{
		result[index2] = s2[index2 - index1];
		index2++;
	}
	result[index2] = '\0';
	return (result);
}

//int	main(void)
//{
//	char	string[] = {"eai\n"};
//	char	string1[] = {" caralho\n"};
//	
//	printf("%s", ft_strjoin(string, string1));
//	return (0);
//}
