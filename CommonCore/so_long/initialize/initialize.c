/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 02:35:24 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/17 22:12:50 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    print_map(char **map)
{
    int i = 0;
    while (map && map[i])
    {
        printf("%s", map[i]);
        i++;
    }
}

int line_count(const char *filename)
{
    int count = 0;
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
        return (-1);
    char *line;
    while ((line = get_next_line(fd)))
    {
        count++;
        free(line);
    }
    close(fd);
    return (count);
}

int initialize_vars(char *map, t_data *data)
{
    data->rows = line_count(map);
    if (data->rows <= 0)
    {
        printf("Failed to read lines or empty file\n");
        return 1;
    }
    data->map = malloc(sizeof(char *) * (data->rows + 1));
    if (!data->map)
    {
        perror("malloc");
        return 1;
    }
    int fd = open(map, O_RDONLY);
    if (fd < 0)
    {
        perror("open");
        free(data->map);
        return 1;
    }
    int i = 0;
    char *line;
    while ((line = get_next_line(fd)))
    {
        data->map[i++] = line;
    }
    data->map[i] = NULL;
    close(fd);
    data->columns = str_len_no_nl(data->map[0]);
    // print_map(data->map);
    if (!parse_map(data->map, map, *data))
    {
        printf("Invalid map\n");
        return 1;
    }
    // printf("\n\nValid map\n");
    return 0;
}

// int    initialize_vars(char *map)
// {
//     t_data *data;
//     data.rows = line_count(map);
//     if (data.rows <= 0)
//     {
//         printf("Failed to read lines or empty file\n");
//         return (1);
//     }
//     data.map = malloc(sizeof(char *) * (data.rows + 1));
//     if (!data.map)
//     {
//         perror("malloc");
//         return (1);
//     }
//     int fd = open(map, O_RDONLY);
//     if (fd < 0)
//     {
//         perror("open");
//         free(data.map);
//         return (1);
//     }
//     int i = 0;
//     char *line;
//     while ((line = get_next_line(fd)))
//     {
//         data.map[i++] = line;
//     }
//     data.map[i] = NULL;
//     close(fd);
//     data.columns = str_len_no_nl(data.map[0]);
//     print_map(data.map);
//     if (!parse_map(data.map, map, data))
//     {
//         printf("Invalid map\n");
//         return (1);
//     }
//     printf("\n\nValid map\n");
//     return 0;
// }