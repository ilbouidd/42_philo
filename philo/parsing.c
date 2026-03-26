/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbouidd <ilbouidd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 08:31:29 by ilbouidd          #+#    #+#             */
/*   Updated: 2026/03/26 05:50:29 by ilbouidd         ###   ########.fr       */
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

static int	no_cara(char **av)
{
	int	i;
    int j;

	i = 1;
	if (!av || av[0] == '\0')
		return (1);
	while (av[i])
	{
        while(av[i][j])
        {
		    if (!ft_isdigit(av[i][j]))
			    return (1);
        }
		i++;
	}
	return (0);
}

int errors_all(char **av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if (no_cara(av[i]) == 1)
            return (printf("Errors: have caractere in argument"), 1);
    }
    return (0);
}