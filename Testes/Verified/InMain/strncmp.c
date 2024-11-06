/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:09:06 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/29 00:18:56 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int	main()
{
	char s1[] = "123456";
	char s2[] = "123456";
	char s3[] = "123456";
	char s4[] = "654321";
	char s5[] = "654321";
	char s6[] = "123456";
	char s7[] = "123456";
	char s8[] = "123478";

	printf("ft_strncmp(123456 && 123456 (6)) = %d\n", ft_strncmp(s1, s2, 6));
	printf("strncmp(123456 && 123456 (6)) = %d\n", strncmp(s1, s2, 6));
	printf("ft_strncmp(123456 && 654321 (6)) = %d\n", ft_strncmp(s3, s4, 6));
	printf("strncmp(123456 && 654321 (6)) = %d\n", strncmp(s3, s4, 6));
	printf("ft_strncmp(654321 && 123456 (6)) = %d\n", ft_strncmp(s5, s6, 6));
	printf("strncmp(654321 && 123456 (6)) = %d\n", strncmp(s5, s6, 6));
	printf("ft_strncmp(123456 && 123478 (4)) = %d\n", ft_strncmp(s7, s8, 4));
	printf("strncmp(123456 && 123478 (4)) = %d\n", strncmp(s7, s8, 4));
}