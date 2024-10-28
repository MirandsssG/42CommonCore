/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:00:28 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 14:10:36 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

	printf("%zu", ft_strlcpy(dst, src, 7));
}