/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:26:42 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/02/17 11:36:55 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        rr(a, b, false);
    current_index(*a);
    current_index(*b);
}

void    rev_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
        rrr(a, b, false);
    current_index(*a);
    current_index(*b);
}

void    prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name)
{
    while (*stack != top_node)
    {
        if (stack_name == 'a')
        {
            if (top_node->above_median)
                ra(stack, false);
            else
                rra(stack, false);
        }
        else if (stack_name == 'b')
        {
            if (top_node->above_median)
                rb(stack, false);
            else
                rrb(stack, false);
        }
    }
}