/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:42:08 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 23:46:30 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *s_dest;
	char *s_src;

	i = 0;
	s_dest = (char *)dest;
	s_src = (char *)src;
	while (i < n)
	{
		s_dest[i] = s_src[i];
		i++;
	}
	return (s_dest);
}

int	main()
{
	char src[50] = "Ola Mundooo";
	char dest[50] = "ALOOOOOO";

	printf("%p\n", ft_memcpy(dest, src, 6));
	printf("%p\n", memcpy(dest, src, 6));
}