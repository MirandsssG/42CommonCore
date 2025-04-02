/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 06:31:51 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/02 06:34:43 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[2]);
        int min;
        
        if (n1 > n2)
            min = n2;
        else
            min = n1;
        while (min > 0)
        {
            if (n1 % min == 0 && n2 % min == 0)
            {
                printf("%d", min);
                break;
            }
            min--;
        }
    }
    printf("\n");
    return (0);
}