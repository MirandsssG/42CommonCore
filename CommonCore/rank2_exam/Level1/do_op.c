/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:04:20 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/20 19:13:35 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    int i = 0;
    if (ac == 4)
    {
        if (av[2][0] == '+')
            printf("%d", (atoi(av[1]) + (atoi(av[3]))));
        if (av[2][0] == '-')
            printf("%d", (atoi(av[1]) - (atoi(av[3]))));
        if (av[2][0] == '*')
            printf("%d", (atoi(av[1]) * (atoi(av[3]))));
        if (av[2][0] == '/')
            printf("%d", (atoi(av[1]) / (atoi(av[3]))));
        if (av[2][0] == '%')
            printf("%d", (atoi(av[1]) % (atoi(av[3]))));
    }
    printf("\n");
}