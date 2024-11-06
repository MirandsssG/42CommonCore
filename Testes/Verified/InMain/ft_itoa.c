/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:40:53 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/31 16:35:23 by mirandsssg       ###   ########.fr       */
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
	return ((nbr < 0) ? -nbr : nbr);
}

char	*ft_strrev(char *str)
{
	int	len = 0;
	int	i = 0;
	char temp;

	while (str[len] != '\0')
		len++;
	len--;
	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return(str);
}

char *ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	lenght;

	is_neg = (n < 0);
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	lenght = 0;
	while (n != 0)
	{
		str[lenght++] = ft_abs(n % 10) + '0';
		n = (n / 10);
	}
	if (is_neg)
		str[lenght++] = '-';
	str[lenght] = '\0';
	ft_strrev(str);
	return (str);
}

int	main()
{
	int	n1 = 912367;
	int	n2 = -912367;
	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
}