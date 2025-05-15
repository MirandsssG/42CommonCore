/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 23:53:56 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/15 23:54:55 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    free_map(t_data *data)
{
    int i;

    i = 0;
    while (data->map && i < data->rows)
        free(data->map[i++]);
    free (data->map);
}