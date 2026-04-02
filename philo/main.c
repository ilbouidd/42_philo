/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 20:06:56 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/04/02 10:09:53 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int ac, char **av)
{
	t_philo	philo;

	if (ac !=  5 && ac != 6)
		return (printf("Error: No good arguments\n"), 1);
	philo.av = av;
	if (errors_all(&philo) == 1)
		return(1);
}
