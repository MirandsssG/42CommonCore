/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:32:24 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/02 06:11:03 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len = 0;
    int *result;

    len = (start >= end) ? (start - end + 1) : (end - start + 1);
    result = (int *)malloc(sizeof(int) * len);

    while (i < len)
    {
        if (start < end)
        {
            result[i] = start;
            start++;
            i++;
        }
        else
        {
            result[i] = start;
            start--;
            i++;
        }
    }
    return (result);    
}

int main()
{
    int start, end;
    int *array;
    int i, len;

    // Teste com diferentes valores
    start = -2;
    end = 3;

    array = ft_range(start, end);

    if (!array)
    {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Calcular o tamanho do array
    len = (start > end) ? (start - end + 1) : (end - start + 1);

    // Exibir os valores gerados
    printf("Array gerado de %d até %d: ", start, end);
    for (i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(array);

    return 0;
}