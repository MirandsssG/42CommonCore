/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:12:59 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 23:15:26 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int	main()
{
	printf("ft_isprint(a) = %d\n", ft_isprint('a'));
	printf("isprint(a) = %d\n", isprint('a'));
	printf("ft_isprint(0) = %d\n", ft_isprint('0'));
	printf("isprint(0) = %d\n", isprint('0'));
	printf("ft_isprint(@) = %d\n", ft_isprint('@'));
	printf("isprint(@) = %d\n", isprint('@'));
	printf("ft_isprint('Newline') = %d\n", ft_isprint('\n'));
	printf("isprint('Newline') = %d\n", isprint('\n'));
}