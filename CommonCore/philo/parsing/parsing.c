/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 13:58:32 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/02/18 14:17:11 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	validate_args(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 6 && ft_atoi(av[5]) <= 0)
		return (printf("Must eat count must be greater than 0!\n"), 1);
	if (ac != 5 && ac != 6)
		return (printf("Invalid initialization!\n"
				"Use ./philo (Number of Philosophers) (Time to die) "
				"(Time to eat) (Time to sleep) [Must eat count]\n"), 1);
	while (i < ac)
	{
		if (!is_valid_arg(av[i]))
			return (printf("Invalid arguments!\n"), 1);
		i++;
	}
	return (0);
}

void	parse_args(int ac, char **av, t_data *data)
{
	data->number_of_philos = ft_atoi(av[1]);
	data->time_to_die = ft_atoi(av[2]);
	data->time_to_eat = ft_atoi(av[3]);
	data->time_to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data->must_eat_count = ft_atoi(av[5]);
	else
		data->must_eat_count = -1;
}
