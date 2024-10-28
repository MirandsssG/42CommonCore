/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:42:08 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 12:55:32 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*memcpy(void *dest, const void *src, size_t n)
{
	int	i;
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
	return(s_dest);
}

int	main()
{
	char src[50] = "Ola Mundooo";
	char dest[50] = "ALOOOOOO";

	printf("%s", memcpy(dest, src, 6));
}