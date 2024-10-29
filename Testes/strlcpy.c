/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:00:28 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 23:57:05 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (i);
	}
	else
		return (0);
}

int	main()
{
	char dst[50] = "Ola Mundo";
	char src[50] = "Pao com Manteiga";

	printf("ft_strlcpy = %zu\n", ft_strlcpy(dst, src, 7));
	
	char dst1[50] = "Ola Mundo";
	char src1[50] = "Pao com Manteiga";
	
	printf("strlcpy = %zu\n", strlcpy(dst1, src1, 7));
}