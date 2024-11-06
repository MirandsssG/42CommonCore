/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:46:49 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 22:57:54 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main()
{
	printf("ft_isalpha(a) = %d\n", ft_isalpha('a'));
	printf("isalpha(a) = %d\n", isalpha('a'));
	printf("ft_isalpha(A) = %d\n", ft_isalpha('A'));
	printf("isalpha(A) = %d\n", isalpha('A'));
	printf("ft_isalpha(@) = %d\n", ft_isalpha('@'));
	printf("isalpha(@) = %d\n", isalpha('@'));
}