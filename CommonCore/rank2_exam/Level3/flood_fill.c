/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:37:49 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/15 12:41:09 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  s_point
{
    int         x;
    int         y;
}               t_point;

void    fill(char **tab, t_point size, t_point cur, char to_fill)
{
    
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill (tab, size, begin, tab[begin.y][begin.x]);
}