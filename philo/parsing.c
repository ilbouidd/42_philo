/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 08:31:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/04/04 20:13:54 by ilbouidd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

static int  no_cara(char **av)
{
    int i;
    int j;

    i = 1;
    if (!av || !av[i] || av[i][0] == '\0')
        return (1);
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (ft_isdigit(av[i][j]) == 0)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int errors_all(t_philo *philo)
{
	if (no_cara(philo->av) == 1)
		return (printf("Error: Caracters in argument\n"), 1);
    if (philo->nb_philo <= 0)
        return (printf("Error: no good number of philosophers\n"), 1);
    if (philo->time_die <= 0)
        return (printf("Error: no good time for die\n"), 1);
    if (philo->time_eat <= 0)
        return (printf("Error: no good time for eat\n"), 1);
    if (philo->time_sleep <= 0)
        return (printf("Error: no good time for sleep\n"), 1);
    return (0);
}
