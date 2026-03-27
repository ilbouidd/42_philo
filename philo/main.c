/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:06:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/03/27 10:29:52 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <stdio.h>

int main(int ac, char **av)
{
	t_philo	*philo;

	(void)ac;
	philo = NULL;
	philo->nb_philo = ft_atoi(av[1]);
	if (ac !=  5 && ac != 6)
		return (printf("no good arguments"), 1);
	printf("%d\n", philo->nb_philo);
	if (errors_all(av) == 1)
		return(1);
}
