/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:16:33 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/07 18:01:23 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	if (nptr[i] && (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+') && nptr[i + 1] != '-' && nptr[i
			+ 1] != '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= 0 && nptr[i] <= 9) 
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
