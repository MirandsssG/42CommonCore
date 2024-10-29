/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:59:43 by mirandsssg        #+#    #+#             */
/*   Updated: 2024/10/29 00:02:40 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	return (c - 32);
}

int	main()
{
	printf("ft_toupper(c) = %c\n", ft_toupper('c'));
	printf("toupper(c) = %c\n", toupper('c'));
}