/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:01:03 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 23:04:17 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main()
{
	printf("ft_isdigit(0) = %d\n", ft_isdigit('0'));
	printf("isdigit(0) = %d\n", isdigit('0'));
	printf("ft_isdigit(9) = %d\n", ft_isdigit('9'));
	printf("isdigit(9) = %d\n", isdigit('9'));
	printf("ft_isdigit(@) = %d\n", ft_isdigit('@'));
	printf("isdigit(@) = %d\n", isdigit('@'));
}