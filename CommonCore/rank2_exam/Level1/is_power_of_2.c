/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:38:58 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 16:41:46 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    return ((n == 1) ? 1 : 0);
}

int main()
{
    unsigned int n = 16;
    printf ("%d", is_power_of_2(n));
}