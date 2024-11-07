/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:20:15 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/07 11:09:29 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *s_str;

	i = 0;
	s_str = (const unsigned char *)s;
	while (i < n)
	{
		if (s_str[i] == (unsigned char)c)
			return (void *)(s_str + i);
		i++;
	}
	return (NULL);
}

int	main()
{
	char str[50] = "Ola Mundo";
	
	char *result_ft = (char *)ft_memchr(str, 'u', 8);
	if (result_ft)
		printf("ft_memchr: Found '%c' at position: %ld\n", *result_ft, result_ft - str);
	else
		printf("ft_memchr: Character not found within the first 5 characters\n");

	char *result_std = (char *)memchr(str, 'u', 5);
	if (result_std)
		printf("memchr: Found '%c' at position: %ld\n", *result_std, result_std - str);
	else
		printf("memchr: Character not found within the first 5 characters\n");
}