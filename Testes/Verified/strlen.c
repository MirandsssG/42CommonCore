/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:16:05 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/28 23:20:37 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main()
{
	char str[50] = "Ola Mundo";

	printf("ft_strlen (Ola Mundo) = %zu\n", ft_strlen(str));
	printf("strlen (Ola Mundo) = %zu", strlen(str));
}