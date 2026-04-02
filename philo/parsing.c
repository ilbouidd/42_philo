/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 08:31:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/04/02 10:10:15 by ilbouidd         ###   ########.fr       */
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

static int just_one_philo(char **av)
{
    if (av[1][0] == '1' && av[1][1] == '\0')
        return (1);
    else
        return (0);
}

static int	zero_in_argument(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '0' && av[i][1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int errors_all(t_philo *philo)
{
	if (no_cara(philo->av) == 1)
		return (printf("Error: Caracters in argument\n"), 1);
    if (just_one_philo(philo->av) == 1)
        return (printf("Error: just one philo\n"), 1);
    if (just_one_philo(philo->av) == 1)
        return (printf("Error: just one philo\n"), 1);
    if (zero_in_argument(philo->av) == 1)
        return (printf("Error: zero in argument\n"), 1);
    return (0);
}
