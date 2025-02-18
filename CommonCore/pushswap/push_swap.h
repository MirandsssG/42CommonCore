/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:13:50 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/02/18 14:00:47 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "includes/libft/libft.h"
# include "includes/libftprintf/ft_printf.h"

typedef struct s_stack_node
{
    int         nbr;
    int         index;
    int         push_cost;
    bool        above_median;
    bool        cheapest;
    struct      s_stack_node *target_node;
    struct      s_stack_node *next;
    struct      s_stack_node *prev;
}   t_stack_node;

#endif