/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:57:54 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/07 00:04:03 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	is_valid_arg(char *str)
{
	int	i;

	i = 0;
	if (!str || !*str)
		return (0);
	if (str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_data	data;
	int		i;

	if (ac != 5 && ac != 6)
	{
		printf("Invalid initialization!\nUse ./philo (Number of Philosophers) (Time to die) (Time to eat) (Time to sleep) [Must eat count]\n");
		return (1);
	}
	i = 1;
	while (i < ac)
	{
		if (!is_valid_arg(av[i]))
		{
			printf("Invalid arguments!\n");
			return (1);
		}
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
	printf("Number of philosophers = %d\nTime to die = %d\nTime to eat = %d\nTime to sleep = %d\nMust eat count = %d\n", data.number_of_philos, data.time_to_die, data.time_to_eat, data.time_to_sleep, data.must_eat_count);
	return (0);
}
