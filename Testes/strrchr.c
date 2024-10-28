/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:39:12 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 14:40:47 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int	i;
	char *str_s;
	
	i = 0;
	str_s = (char *)s;
	while (str_s[i] != '\0')
		i++;
	while (i >= 0 && str_s[i] != c)
		i--;
	return (&str_s[i]);
}

int	main()
{
	char str[50] = "Olau Mundo";
	
	printf("%s", ft_strrchr(str, 'u'));
}