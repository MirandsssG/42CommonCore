/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:08:31 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/14 19:55:53 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

size_t  str_len_no_nl(const char *s)
{
    size_t len = 0;
    while (s[len] && s[len] != '\n')
        len++;
    return (len);
}

int ber_extension(const char *filename)
{
    const char *extension = strrchr(filename, '.');
    if (!extension || strcmp(extension, ".ber") != 0)
        return (0);
    return (1);
}

int is_valid_char(char c)
{
    return (c == '0' || c == '1' || c == 'P' || c == 'E' || c == 'C' || c == '\n');
}

int validate_char(char **map)
{
    int i = 0;
    while (map[i])
    {
        int j = 0;
        while (map[i][j])
        {
            if (!is_valid_char(map[i][j]))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int is_rectangular(char **map, t_data data)
{
    int i = 1;
    size_t len;
    if (!map || !map[0])
        return(0);
    len = str_len_no_nl(map[0]);
    while (map[i] && i < data.rows)
    {
        if (str_len_no_nl(map[i]) != len)
            return (0);
        i++;
    }
    return (1);
}

int parse_map(char **map, const char *filename, t_data data)
{
    if (!validate_char(map))
    {
        printf("validate_char\n");
        return (0);
    }
    if (!ber_extension(filename))
    {
        printf("ber_extension\n");
        return (0);
    }
    if (!is_rectangular(map, data))
    {
        printf("is_rectangular\n");
        return (0);
    }
    if (!check_char(map))
    {
        printf("check_char\n");
        return (0);
    }
    if (!is_surrounded(map, data))
    {
        printf("is_surrounded\n");
        return (0);
    }
    return (1);
}