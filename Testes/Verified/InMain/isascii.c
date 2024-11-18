/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:08:18 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 23:11:53 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main()
{
	printf("ft_isascii(a) = %d\n", ft_isascii('a'));
	printf("isascii(a) = %d\n", isascii('a'));
	printf("ft_isascii(0) = %d\n", ft_isascii('0'));
	printf("isascii(0) = %d\n", isascii('0'));
	printf("ft_isascii(@) = %d\n", ft_isascii('@'));
	printf("isascii(@) = %d\n", isascii('@'));
	printf("ft_isascii('Newline') = %d\n", ft_isascii('\n'));
	printf("isascii('Newline') = %d\n", isascii('\n'));
}