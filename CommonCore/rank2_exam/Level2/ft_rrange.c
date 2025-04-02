/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 06:11:43 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/02 06:15:59 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int len = 0;
    int *array;

    len = (start >= end) ? (start - end + 1) : (end - start + 1);
    array = (int *)malloc(len * sizeof(int));
    if (array == NULL)
        return (NULL);
    while (start != end)
    {
        array[i] = end;
        if (start < end)
            end--;
        else
            end++;
        i++;
    }
    array[i] = end;
    return (array);
}

int *ft_rrange(int start, int end);

int main(void)
{
    int start = 3;
    int end = -2;
    int *array;
    int len;
    int i;

    len = (start >= end) ? (start - end + 1) : (end - start + 1);
    array = ft_rrange(start, end);
    if (!array)
    {
        printf("Erro ao alocar memoria.\n");
        return (1);
    }
    
    printf("Array gerado: ");
    for (i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    free(array);
    return (0);
}