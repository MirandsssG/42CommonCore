/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:29:34 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/15 13:43:50 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 1;
    int n;
    if (ac == 2)
    {
        n = atoi(av[1]);
        if (n == 1)
        {
            printf("1");
            return (0);
        } 
        while (n > 1)
        {
            if (n % ++i == 0)
            {
                printf("%d", i);
                n = n / i;
                if (n > 1)
                    printf("*");
                i = 1;
            }
        }
    }
    printf("\n");
    return (0);
}