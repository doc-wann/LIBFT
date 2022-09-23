/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:51:38 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/12 22:15:49 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	int	min_alphal;
	int	max_alphal;
	int	min_alphau;
	int	max_alphau;

	min_alphal = 97;
	max_alphal = 122;
	min_alphau = 65;
	max_alphau = 90;
	if (argument >= min_alphal && argument <= max_alphal)
		return (2);
	else if (argument >= min_alphau && argument <= max_alphau)
		return (1);
	else
		return (0);
}
