/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:40:37 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/04 15:41:14 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("Teste 123", 1);

	ft_putendl_fd("Erro", 2);

	return (0);
}