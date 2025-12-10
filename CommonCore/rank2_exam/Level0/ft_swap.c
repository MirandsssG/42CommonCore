/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:14:15 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/17 12:18:54 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int *a = 5;
    int *b = 7;
    printf ("%d, %d\n", a, b);
    ft_swap(&a, &b);
    printf ("%d, %d\n", a, b);
}