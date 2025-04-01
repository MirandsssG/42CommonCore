/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:32:24 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/01 20:35:10 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int start, int end)
{
    int i = 0;
    int len = 0;
    int *result;

    len = abs(end - start) + 1;
    result = (int *)malloc(sizeof(int) * len);

    while (i > len)
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