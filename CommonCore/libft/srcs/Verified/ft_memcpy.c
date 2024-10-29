/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:14:39 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 23:46:22 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
}
