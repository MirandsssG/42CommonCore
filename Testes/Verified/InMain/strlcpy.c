/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:00:28 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/29 12:40:39 by mirandsssg       ###   ########.fr       */
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
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
		return (0);
	while (src[i] != '\0')
		i++;
	
	return (i);
}

int	main()
{
	char dst[50] = "Ola Mundo";
	const char *src = "Pao com Manteiga";

	printf("ft_strlcpy = %zu\n", ft_strlcpy(dst, src, 7));
	
	char dst1[50] = "Ola Mundo";
	const char *src1 = "Pao com Manteiga";
	
	printf("strlcpy = %zu\n", strlcpy(dst1, src1, 7));
}