/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:05:49 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/07 20:54:52 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <errno.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <limits.h>
# include <fcntl.h>
# include <pthread.h>
# include <sys/time.h>

typedef	struct s_philo
{
	int				id;
	int				meals_eaten;
	long long		last_meal_time;
	pthread_t		thread;
	struct s_data	*data;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
}	t_philo;

typedef	struct s_data
{
	int				number_of_philos;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				must_eat_count;
	int				dead;
	long long		start_time;
	pthread_mutex_t	lock_print;
	pthread_mutex_t	*forks;
	t_philo			*philos;
}	t_data;

// Helpers

int			ft_atoi(const char *str);

int			is_valid_arg(char *str);

// Initialization

int			init_data(t_data *data);

long long	get_time_ms(void);

// Cleanup

void		cleanup_data(t_data *data);

// Execute

int			execute(t_data *data);

#endif