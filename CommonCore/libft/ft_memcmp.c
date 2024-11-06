/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:16:16 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/29 13:20:57 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_str;
	unsigned char *s2_str;
	size_t				i;
	
	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_str[i] != s2_str[i])
			return (s1_str[i] - s2_str[i]);
		i++;
	}
	return (0);
}