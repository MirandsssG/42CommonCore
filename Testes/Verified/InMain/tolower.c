/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:03:02 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/29 00:03:51 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	return (c + 32);
}

int	main()
{
	printf("ft_tolower(C) = %c\n", ft_tolower('C'));
	printf("tolower(C) = %c\n", tolower('C'));
}