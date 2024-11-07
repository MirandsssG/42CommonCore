/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:14:48 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/07 17:28:50 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s_dest;
	char	*s_src;

	if (n == 0 || dest == src)
		return (dest);
	if (!dest && !src)
		return (NULL);
	s_dest = (char *)dest;
	s_src = (char *)src;
	if (s_dest > s_src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			s_dest[i] = s_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
		s_dest[i] = s_src[i];
		i++;
		}
	
	}
	return (s_dest);
}
