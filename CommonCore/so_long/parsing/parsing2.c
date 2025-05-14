/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:29:11 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/14 19:09:53 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int check_char(char **map)
{
    int i = 0;
    int p = 0;
    int e = 0;
    int c = 0;
    
    while (map[i])
    {
        int j = 0;
        while (map[i][j])
        {
            if (map[i][j] == 'P')
                p++;
            else if (map[i][j] == 'E')
                e++;
            else if (map[i][j] == 'C')
                c++;
            j++;
        }
        i++;
    }
    return (p == 1 && e == 1 && c >= 1);
}

int top_or_bottom_row(char *row)
{
    int i = 0;
    while (row[i] && row[i] != '\n')
    {
        if (row[i] != '1')
            return (0);
        i++;
    }
    return (1);
}

int is_surrounded(char **map, t_data data)
{
    int i = 1;
    size_t len;
    
    if (!map || !map[0])
        return (0);
    len = str_len_no_nl(map[0]);
    if (!top_or_bottom_row(map[0]))
    {
        printf("1\n");
        return (0);
    }
    while (i < data.rows - 1)
    {
        if (map[i][0] != '1' || map[i][len - 1] != '1')
        {
            printf("2\n");
            return (0);
        }
        i++;
    }
    if (!top_or_bottom_row(map[data.rows - 1]))
    {
        printf("3\n");
        return (0);
    }
    return (1);
}