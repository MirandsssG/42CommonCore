/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:24:29 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/04 15:31:34 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putchar_fd('T', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('s', 1);
	ft_putchar_fd('t', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('\n', 1);

	ft_putchar_fd('E', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('\n', 2);

	return (0);
}
