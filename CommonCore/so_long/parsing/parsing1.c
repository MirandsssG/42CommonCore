/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:08:31 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/24 10:05:32 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

size_t	str_len_no_nl(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != '\n')
		len++;
	return (len);
}

int	validate_char(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
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

int	is_rectangular(char **map, t_data data)
{
	int		i;
	size_t	len;

	i = 0;
	if (!map || !map[0])
		return (0);
	len = str_len_no_nl(map[0]);
	while (map[i] && i < data.rows)
	{
		if (str_len_no_nl(map[i]) != len)
			return (0);
		i++;
	}
	return (1);
}

int		parse_map1(char **map, const char *filename, t_data data)
{
	if (!validate_char(map))
	{
		ft_printf("validate_char\n");
		return (0);
	}
	if (!ber_extension(filename))
	{
		ft_printf("ber_extension\n");
		return (0);
	}
	if (!check_char(map))
	{
		ft_printf("check_char\n");
		return (0);
	}
	if (!is_path_valid(&data))
	{
		ft_printf("floodfill\n");
		return (0);
	}
	if (!parse_map2(map, data))
		return (0);
	return (1);
}

int	parse_map2(char **map, t_data data)
{
	if (!is_surrounded(map, data))
	{
		ft_printf("is_surrounded\n");
		return (0);
	}
	if (!is_rectangular(map, data))
	{
		ft_printf("is_rectangular\n");
		return (0);
	}
	if (!is_bigger_than_window(data))
	{
		ft_printf("Map is bigger than window\n");
		return (0);
	}
	return (1);
}
