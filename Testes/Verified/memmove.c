/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:40:52 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 23:47:58 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *s_dest;
	char *s_src;
	char *temp;

	i = 0;
	s_dest = (char *)dest;
	s_src = (char *)src;
	temp = s_src;
	while (i < n)
	{
		s_dest[i] = temp[i];
		i++;
	}
	return(s_dest);
}

int	main()
{
	char src[50] = "Ola Mundooo";
	char dest[50] = "ALOOOOOO";

	printf("%p\n", ft_memmove(dest, src, 6));
	printf("%p\n", memmove(dest, src, 6));
}
