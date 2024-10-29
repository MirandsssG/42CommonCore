/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:25:43 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 23:43:06 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *s_str;

	i = 0;
	s_str = (char *)s;
	while (i < n)
	{
		s_str[i] = 0;
		i++;
	}
}

void	main()
{
	char str[50] = "Ola Mundo";

	ft_bzero(str, 5);
	printf("%p\n", str);
	
	char str1[50] = "Ola Mundo";
	
	bzero(str, 5);
	printf("%p\n", str1);	
}