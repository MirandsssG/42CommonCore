/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:18:34 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/02/13 13:31:08 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack_node    *a;
    t_stack_node    *b;
    
    a = NULL;
    b = NULL;
    if (ac == 1 || (ac == 2 && !av[1][0]))
        return (1);
    else if (ac == 2)
        av = ft_split(av[1], ' ');
    initialize_stack_a(&a, av + 1);
    if (!stack_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a, false);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else
            sort_stacks(&a, &b);
    }
    free_stacks(&a);
    return (0);
}