/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:11:25 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 23:59:08 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (dst[i] != '\0')
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && j < size)
		{
			dst[i] = src[j];
			j++;
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

	printf("ft_strlcat = %zu\n", ft_strlcat(dst, src, 7));

	char dst1[50] = "Ola Mundo";
	char src1[50] = "Pao com Manteiga";

	printf("strlcat = %zu\n", strlcat(dst, src, 7));
}