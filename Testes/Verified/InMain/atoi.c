/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:14 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/11/08 04:27:33 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i++] == '-')
			sign = -1;
		if (nptr[i] == '+' || nptr[i] == '-')
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i++] - '0');
		if (sign == 1 && result > INT_MAX)
			return (INT_MAX);
		if (sign == -1 && - result < INT_MIN)
			return (INT_MIN);
	}
	return (result * sign);
}

int	main()
{
	char str[50] = "      -123456789";

	printf("atoi:\n");
	printf("ft_atoi (      -123456789) = %d\n", ft_atoi(str));
	printf("atoi (      -123456789) = %d\n", atoi(str));
	printf("ft_atoi (123456789) = %d\n", ft_atoi("123456789"));
	printf("atoi (123456789) = %d\n", atoi("123456789"));
	printf("ft_atoi (2147483647) = %d\n", ft_atoi("2147483647"));
	printf("atoi (2147483647) = %d\n", atoi("2147483647"));
	printf("ft_atoi (-2147483648) = %d\n", ft_atoi("-2147483648"));
	printf("atoi (-2147483648) = %d\n", atoi("-2147483648"));
	printf("ft_atoi (0) = %d\n", ft_atoi("0"));
	printf("atoi (0) = %d\n", atoi("0"));
}