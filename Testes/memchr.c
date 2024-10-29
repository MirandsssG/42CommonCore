/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 00:20:15 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/29 00:27:14 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char *s_str;

	i = 0;
	s_str = (char *)s;
	while (s_str[i] != '\0' && s_str[i] != c && i < n)
		i++;
	return (s_str);
}

int	main()
{
	char str[50] = "Ola Mundo";
	
	printf("%p\n", ft_memchr(str, 'u', 5));
	printf("%p\n", memchr(str, 'u', 5));
}