/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:07:52 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/29 13:20:36 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_str;
	unsigned char *s2_str;
	size_t				i;
	
	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_str[i] != s2_str[i])
			return (s1_str[i] - s2_str[i]);
		i++;
	}
	return (0);
}

int main()
{
	char s1[50] = "Ola Mundo";
	char s2[50] = "Ola Mundo";
	char s3[50] = "Olaa Mundo";
	char s4[50] = "Ola Mundo";
	char s5[50] = "Ola Mundo";
	char s6[50] = "Olaa Mundo";

	printf ("ft_memcmp = %d\n", ft_memcmp(s1, s2, 7));
	printf ("memcmp = %d\n", memcmp(s1, s2, 7));
	printf ("ft_memcmp = %d\n", ft_memcmp(s3, s4, 7));
	printf ("memcmp = %d\n", memcmp(s3, s4, 7));
	printf ("ft_memcmp = %d\n", ft_memcmp(s5, s6, 7));
	printf ("memcmp = %d\n", memcmp(s5, s6, 7));
}