/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:11:25 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 14:17:18 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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

	printf("%zu", ft_strlcpy(dst, src, 7));
}