/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:13:50 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/02/19 14:55:21 by mirandsssg       ###   ########.fr       */
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


//Errors
int	error_syntax(char *str_n);

int	error_duplicate(t_stack_node *a, int n);

void	free_stack(t_stack_node **stack);

void	free_errors(t_stack_node **a);


//Helpers
t_stack_node	*find_last(t_stack_node *stack);

t_stack_node	*find_min(t_stack_node *stack);

t_stack_node	*find_max(t_stack_node *stack);

int stack_len(t_stack_node *stack);

bool	stack_sorted(t_stack_node *stack);


//Initialize Nodes A
void    current_index(t_stack_node *stack);

// static void set_target_a(t_stack_node *a, t_stack_node *b);

// static void cost_analysis_a(t_stack_node *a, t_stack_node *b);
    
void    set_cheapest(t_stack_node *stack);

void    initialize_nodes_a(t_stack_node *a, t_stack_node *b);


//Initialize Nodes B
// static void set_target_b(t_stack_node *a, t_stack_node *b);

void    initialize_nodes_b(t_stack_node *a, t_stack_node *b);


//Initialize Stack A
// static long ft_atol(const char *s);

// static void append_node(t_stack_node **stack, int n);

void    initialize_stack_a(t_stack_node **a, char **av);

t_stack_node    *get_cheapest(t_stack_node *stack);


//Sort Stacks
void    sort_stacks(t_stack_node **a, t_stack_node **b);


//Sort Three
void    sort_three(t_stack_node **a);


//Stack Sorted
bool    stack_sorted(t_stack_node *stack);


//Move
// static void move_a_to_b(t_stack_node **a, t_stack_node **b);

// static void move_b_to_a(t_stack_node **a, t_stack_node **b);

// static void min_on_top(t_stack_node **a);


//Push
// static void push(t_stack_node **dest, t_stack_node **src);

void    pa(t_stack_node **a, t_stack_node **b, bool print);

void    pb(t_stack_node **b, t_stack_node **a, bool print);

void    prep_for_push(t_stack_node **stack, t_stack_node *top_node, char stack_name);


//Reverse Rotate
// static void	rev_rotate(t_stack_node **stack);

void    rra(t_stack_node **a, bool print);

void    rrb(t_stack_node **b, bool print);

void    rrr(t_stack_node **a, t_stack_node **b, bool print);

void    rev_rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node);


//Rotate
// static void rotate(t_stack_node **stack);

void    ra(t_stack_node **a, bool print);

void    rb(t_stack_node **a, bool print);

void    rr(t_stack_node **a, t_stack_node **b, bool print);

void    rotate_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest_node);


//Swap
// static void swap(t_stack_node **head);

void    sa(t_stack_node **a, bool print);

void    sb(t_stack_node **b, bool print);

void    ss(t_stack_node **a, t_stack_node **b, bool print);

#endif