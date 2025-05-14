/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_valid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:46:40 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/14 20:04:44 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int is_path_valid(t_data *data)
{
    int px = 0;
    int py = 0;
    find_player(data, &px, &py);

    char **map_copy = copy_map(data->map, data->rows);
    if (!copy)
        return (0);
    floodfill(copy, px, py);

    int result = is_reachable(copy);

    int i = 0;
    while (i < data->rows)
        free(copy[i++]);
    free(copy);

    return (result);
}