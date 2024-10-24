/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:10 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/24 12:33:42 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	if (length > 0)
	{
		f(*tab);
		ft_foreach(tab + 1, length - 1, f);
	}
}

void	ft_putnbr(int n)
{
	printf("%d\n", n);
}

int	main()
{
	int	tab[] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
	return(0);
}