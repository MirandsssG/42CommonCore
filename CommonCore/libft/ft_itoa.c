/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:25:18 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/07 14:23:32 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = 0;
	i = 0;
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
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	lenght;

	is_neg = (n < 0);
	str = ft_calloc(11 + is_neg, sizeof(*str));
	if (!(str))
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
