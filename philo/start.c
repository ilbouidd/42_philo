/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 10:16:37 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/04/04 22:04:26 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_all(t_philo *philo)
{
	philo->nb_philo = ft_atoi_philo(philo->av[1]);
	philo->time_die = ft_atoi_philo(philo->av[2]);
	philo->time_eat = ft_atoi_philo(philo->av[3]);
	philo->time_sleep = ft_atoi_philo(philo->av[4]);
	if (!philo->av[5])
		return ;
	else
		philo->time_must_eat = ft_atoi_philo(philo->av[5]);
}

// void	init_thread(t_philo *philo)
// {
// 	size_t	i;
// 	size_t	len;

// 	i = 0;
// 	len = philo->nb_philo;
// 	while (i < len)
// 	{
// 		pthread_create();
// 	}
// }

// void	routine(void)
// {
    
// }