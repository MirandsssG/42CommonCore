/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:08:58 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 17:12:26 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int* tab, unsigned int len)
{
    if (len == 0)
        return (0);
    unsigned int i = 0;
    unsigned int max = tab[i];
    
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

int main()
{
    int tab[] = {5, 6, 7, 3, 4, 9};
    unsigned int len = 6;
    printf ("%d", max(tab, len));
}