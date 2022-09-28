/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:54:42 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/28 19:31:11 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_count(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void	ft_alloc(size_t len, char *x, int n)
{
	x[len] = '\0';
	if (n < 0)
	{
		x[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		x[0] = 48;
	while (len >= 0 && n > 0)
	{
		x[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*x;
	size_t	len;

	if (n == -2147483648)
	{
		x = ft_strdup("-2147483648");
		return (x);
	}
	len = ft_count(n);
	x = malloc(sizeof(char) * len + 1);
	if (!x)
		return (NULL);
	ft_alloc(len, x, n);
	return (x);
}

// int	main(void)
// {
// 	int	x = -2147483648;
// 	char	*y;

// 	y = ft_itoa(x);
// 	printf("%i", x);
// 	printf("\n");
// 	printf("%s", y);
// 	printf("\n");
// }