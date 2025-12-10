/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:57:54 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/11/10 14:50:26 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data	data;
	int		i;

	if (ac != 5 && ac != 6)
		return (printf("Invalid initialization!\nUse ./philo (Number of Philosophers) (Time to die) (Time to eat) (Time to sleep) [Must eat count]\n"), 1);
	i = 1;
	while (i < ac)
	{
		if (!is_valid_arg(av[i]))
			return (printf("Invalid arguments!\n"), 1);
		i++;
	}
	data.number_of_philos = ft_atoi(av[1]);
	data.time_to_die = ft_atoi(av[2]);
	data.time_to_eat = ft_atoi(av[3]);
	data.time_to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data.must_eat_count = ft_atoi(av[5]);
	else
		data.must_eat_count = -1;
	if (init_data(&data))
	{
		cleanup_data(&data);
		return (1);
	}
	if (execute(&data))
	{
		cleanup_data(&data);
		return (1);
	}
	cleanup_data(&data);
	return (0);
}
