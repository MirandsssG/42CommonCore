/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:42:26 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/14 01:30:29 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

int main (int ac, char **av)
{
    if (ac != 2)
    {
        ft_printf("Usage: %s <filename>\n", av[0]);
        return (1);
    }
    t_data data;
    data.rows = line_count(av[1])
    if (data.rows <= 0)
    {
        ft_printf("Failed to read lines or empty file\n");
        return (1);
    }
    data.mapa = malloc(sizeof(char *) * (data.rows + 1));
    if (!data.mapa)
    {
        perror("malloc");
        return (1);
    }
    int fd = open(av[1], O_RDONLY);
    if (fd < 0)
    {
        perror("open");
        free(data.mapa);
        return (1);
    }
    int i = 0;
    char *line;
    while ((line = get_next_line(fd)));
        data.mapa[i++] = line;
    data.mapa[i] = NULL;
    close(fd);
    
    return 0;
}