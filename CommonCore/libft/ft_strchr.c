/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:15:23 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/07 14:12:38 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str_s;

	i = 0;
	str_s = (char *)s;
	while (str_s[i] != '\0' && str_s[i] != c)
	{
		i++;
	}
	return (&str_s[i]);
}
