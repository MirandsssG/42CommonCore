/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:30:42 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/29 00:05:40 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int	i;
	char *str_s;
	
	i = 0;
	str_s = (char *)s;
	while (str_s[i] != '\0' && str_s[i] != c)
	{
		i++;
	}
	return (&str_s[i]);
}

int	main()
{
	char str[50] = "Olau Mundo";
	
	printf("ft_strchr(Olau Mundo) = %s\n", ft_strchr(str, 'u'));
	printf("strchr(Olau Mundo) = %s\n", strchr(str, 'u'));
}