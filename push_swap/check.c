/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:28:35 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/14 19:54:21 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_errors(char *tab)
{
	int	i;

	i = 0;
	if (tab[i] == '-')
		i++;
	while (tab[++i])
	{
		if (tab[i] < '0' || tab[i] > '9')
		{
			write(1, "Error!\n", 7);
			return (0);
		}
	}
	return (1);
}

int	check_duplicate(int *stack, int lenght)
{
	int	i;
	int	j;

	i = -1;
	while (++i < lenght - 1)
	{
		j = i;
		while (++j < lenght)
		{
			//printf("%i\n", stack[j]);
			if (stack[j] == stack[i])
			{
					printf("%i\n", j);
					printf("%i\n", i);
				return (1);	
			}
		}
	//	printf("%i\n", stack[j]);
		//printf("%i\n", stack[i]);
	}
	return (0);
}

int	is_sorted(int *str, int lenght)
{
	int	i;

	i = -1;
	while (++i < lenght - 1)
	{
		if (str[i] > str[i + 1])
			return (0);
	}
	return (1);
}
