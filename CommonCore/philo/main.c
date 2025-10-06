/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:57:54 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/06 22:24:12 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 5)
	{
		printf("Invalid initialization!\nUse ./philo (Number of Philosophers) (Time to die) (Time to eat) (Time to sleep)\n");
		return (0);
	}
	data.number_of_philos = ft_atoi(av[1]);
	data.time_to_die = ft_atoi(av[2]);
	data.time_to_eat = ft_atoi(av[3]);
	data.time_to_sleep = ft_atoi(av[4]);
	printf("Number of philosophers = %d\nTime to die = %d\nTime to eat = %d\nTime to sleep = %d\n", data.number_of_philos, data.time_to_die, data.time_to_eat, data.time_to_sleep);
	return (0);
}
