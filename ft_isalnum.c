/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaniele <hdaniele@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:51:33 by hdaniele          #+#    #+#             */
/*   Updated: 2022/09/12 22:15:53 by hdaniele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (arg >= 48 && arg <= 57)
		return (1);
	else if (arg >= 65 && arg <= 90)
		return (1);
	else if (arg >= 97 && arg <= 122)
		return (1);
	else
		return (0);
}
