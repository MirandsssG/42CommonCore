/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_one.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 07:08:47 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/03/03 07:09:19 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	handle_one(t_data *data)
{
	printf("0 1 has taken a fork\n");
	usleep(data->time_to_die * 1000);
	printf("%d 1 died\n", data->time_to_die);
	return (0);
}
