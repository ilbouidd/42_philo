/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 08:31:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/03/26 09:36:56 by ibouiddo         ###   ########.fr       */
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
            if (!ft_isdigit(av[i][j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int errors_all(char **av)
{
	if (no_cara(av) == 1)
		return (printf("Error: invalid number of arguments\n"), 1);
	return (0);
}
