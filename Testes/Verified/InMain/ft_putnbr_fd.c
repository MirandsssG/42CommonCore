/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:45:21 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/04 16:02:50 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char	c_char;
	char 			*s_str;
	
	i = 0;
	c_char = (unsigned char)c;
	s_str = (char *) s;
	while (i < n)
	{
		s_str[i] = c_char;
		i++;
	}
	return (s);
}

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

static	int	ft_abs(int n)
{
	return ((n < 0) ? -n : n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		is_neg;
	int		lenght;

	is_neg = (n < 0);
	lenght = 0;
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[lenght] = ft_abs(n % 10) + '0';
		n = (n / 10);
		lenght++;
	}
	if (is_neg)
		str[lenght] = '-';
	else if (lenght > 0)
		lenght--;
	while (lenght >= 0)
		write (fd, &str[lenght--], 1);
}

int	main(void)
{
	ft_putnbr_fd(12345, 1);
	write(1, "\n", 1);
	
	ft_putnbr_fd(-98765, 1);
	write(1, "\n", 1);
	
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);

	return (0);
}
