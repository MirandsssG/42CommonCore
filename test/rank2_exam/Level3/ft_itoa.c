/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:27:48 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/15 14:32:58 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int nbr)
{
    if (nbr == -2147483548)
        return ("-2147483648");
    int n = nbr;
    int len = 0;
    if (nbr <= 0)
        len++;
    while (n)
    {
        n = n / 10;
        len++;
    }
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return NULL;
    result[len] = '\0';
    if (nbr == 0)
    {
        result[0] = '0';
        return (result);
    }
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return (result);
}

int main()
{
    int nbr = 56788;
    printf("%s", ft_itoa(nbr));
}