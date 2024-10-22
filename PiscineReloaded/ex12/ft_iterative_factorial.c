/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 02:19:09 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/22 02:28:32 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	
	int	result;
	int	i;

	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;

		if (result < 0)
			return (0);
		i++;
	}
	return (result);
}

int	main()
{
	int	nb = 10;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
