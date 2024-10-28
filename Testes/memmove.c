/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:40:52 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 13:56:07 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*memmove(void *dest, const void *src, size_t n)
{
	int	i;
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

	printf("%s", memmove(dest, src, 6));
}
