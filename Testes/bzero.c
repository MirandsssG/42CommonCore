/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:25:43 by dluis-ma          #+#    #+#             */
/*   Updated: 2024/10/28 12:38:33 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char *s_str;

	i = 0;
	s_str = (char *)s;
	while (i < n)
	{
		s_str[i] = 0;
		i++;
	}
}

int	main()
{
	char str[50] = "Ola Mundo";

	ft_bzero(str, 3);
	printf("%s\n", str);
}
