/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:07:16 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/04/04 19:39:52 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <limits.h>
# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_philo
{
	int		nb_philo;
	char	**av;
	int		ac;
	size_t	time_die;
	size_t	time_eat;
	size_t	time_sleep;
	size_t	time_must_eat;

}			t_philo;

long		ft_atoi_philo(const char *nptr);
int			errors_all(t_philo *philo);
void		init_all(t_philo *philo);

#endif