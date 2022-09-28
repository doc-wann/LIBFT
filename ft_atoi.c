/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 00:19:34 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/28 19:32:59 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	atoi_looper(const char *str, int x)
{
	int	result;
	int	mult;

	result = 0;
	mult = 1;
	if (str[x] == 45 || str[x] == 32 || str[x] == 43)
		str = &str[x + 1];
	while ((str[x] >= 48 && str[x] <= 57) && (str[x] != '\0'))
	{
		if (!(str[x + 1] >= 48 && str[x + 1] <= 57))
		{
			while (x != -1)
			{
				result = result + (mult * (int)(str[x] - 48));
				mult = mult * 10;
				if (result >= 214483647)
					return (-1);
				x--;
			}
			return (result);
		}
		x++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	x;
	int	mult;

	x = 0;
	mult = 1;
	while (str[x] == ' ' || str[x] == '\n' || str[x] == '\t'
		|| str[x] == '\v' || str[x] == '\f' || str[x] == '\r')
		str = &str[1];
	if (ft_strncmp(str, "-2147483648", 12) == 0)
		return (-2147483648);
	if (ft_strncmp(str, "+2147483647", 11) == 0
		|| ft_strncmp(str, "2147483647", 10) == 0)
		return (2147483647);
	if (str[x] == 45)
		return (-1 * (atoi_looper(str, x)));
	else
		return (atoi_looper(&str[x], x));
}

// int	main(int argc, char *argv[])
// {
// 	printf("MEU ATOI \n");
// 	printf("%i",ft_atoi(argv[1]));
// 	printf("\n");
// 	printf("ATOI ORIGINAL \n");
// 	printf("%i",atoi(argv[1]));
// 	printf("\n");
// 	return (0);
// }
