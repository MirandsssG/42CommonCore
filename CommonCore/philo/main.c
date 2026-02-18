/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:57:54 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/02/18 14:18:15 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (validate_args(ac, av))
		return (1);
	parse_args(ac, av, &data);
	if (init_data(&data))
		return (cleanup_data(&data), 1);
	if (execute(&data))
		return (cleanup_data(&data), 1);
	cleanup_data(&data);
	return (0);
}
