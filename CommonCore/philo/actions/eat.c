/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:30:55 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/07 22:05:38 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	eat(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->lock_print);
	philo->last_meal_time = get_time_ms();
	pthread_mutex_unlock(&philo->data->lock_print);
	print_status(philo, "is eating");
	philo->meals_eaten++;
	usleep(philo->data->time_to_eat * 1000);
}
