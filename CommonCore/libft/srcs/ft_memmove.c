/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:14:48 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 14:19:11 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void dest, const void src, size_t n)
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
}
