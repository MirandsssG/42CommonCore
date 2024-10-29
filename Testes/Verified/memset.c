/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:02:56 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 23:25:12 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char	c_char;
	char 			*s_str;
	
	i = 0;
	c_char = (unsigned char)c;
	s_str = (char *) s;
	while (i < n)
	{
		s_str[i] = c_char;
		i++;
	}
	return (s);
}

int	main()
{
	char str[50] = "Ola Mundo";

	printf("ft_memset(Ola Mundo) = %p\n", ft_memset(str, '#', 5));
	printf("memset(Ola Mundo) = %p\n", memset(str, '#', 5));
}
