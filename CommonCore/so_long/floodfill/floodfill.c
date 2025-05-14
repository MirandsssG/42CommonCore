/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:40:52 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/14 22:12:05 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    floodfill(char **map, int x, int y)
{
    if (map[y][x] == '1' || map[y][x] == 'F' || map[y][x] == '\0' || map[y][x] == '\n')
        return;
    map[y][x] = 'F';
    floodfill(map, x + 1, y);
    floodfill(map, x - 1, y);
    floodfill(map, x, y + 1);
    floodfill(map, x, y - 1);
}