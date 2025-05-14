/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:51:38 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/14 19:58:35 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char    **copy_map(char **map, int rows)
{
    char    **copy = malloc(sizeof(char *) * (rows + 1));
    if (!copy)
        return (NULL);
    int i = 0;
    while (i < rows)
    {
        copy[i] = strdup(map[i]);
        i++;
    }
    copy[rows] = NULL;
    return (copy);
}
