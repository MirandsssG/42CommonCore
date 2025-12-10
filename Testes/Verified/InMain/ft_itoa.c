/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:40:53 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/08 04:51:59 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

void *ft_calloc(size_t nelem, size_t elsize)
{
	void	*pointer;

	pointer = (void *)malloc(nelem * elsize);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, nelem * elsize);
	return (pointer);
}

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	length;

	length = ft_numlen(n);
	str = (char *)ft_calloc(length + 1, sizeof(char));
	if (!(str))
		return (NULL);
	is_neg = (n < 0);
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--length] = ft_abs(n % 10) + '0';
		n = (n / 10);
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

int	main()
{
	int	n1 = 912367;
	int	n2 = -912367;
	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
}