/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:05:40 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 23:07:31 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	main()
{
	printf("ft_isalnum(0) = %d\n", ft_isalnum('0'));
	printf("isalnum(0) = %d\n", isalnum('0'));
	printf("ft_isalnum(A) = %d\n", ft_isalnum('A'));
	printf("isalnum(A) = %d\n", isalnum('A'));
	printf("ft_isalnum(t) = %d\n", ft_isalnum('t'));
	printf("isalnum(t) = %d\n", isalnum('t'));
	printf("ft_isalnum(@) = %d\n", ft_isalnum('@'));
	printf("isalnum(@) = %d\n", isalnum('@'));
}