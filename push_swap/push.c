/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abkasmi <abkasmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:24:44 by abkasmi           #+#    #+#             */
/*   Updated: 2022/03/14 13:30:32 by abkasmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(int *a, int *b, int *nb_a, int *nb_b)
{
	int	i;

	i = -1;
	while (++i < *nb_b)
		b[*nb_b - i] = b[*nb_b - i - 1];
	b[0] = a[0];
	(*nb_b)++;
	(*nb_a)--;
	i = -1;
	while (++i < *nb_a)
		a[i] = a[i + 1];
	write(1, "pb\n", 3);
}

void	push_a(int *a, int *b, int *nb_a, int *nb_b)
{
	int	i;
	int	index;
	int	size;

	i = 0;
	size = *nb_b;
	while (i++ < size)
	{
		index = -1;
		while (++index < *nb_a)
			a[*nb_a - index] = a[*nb_a - index - 1];
		a[0] = b[0];
		(*nb_a)++;
		(*nb_b)--;
		index = -1;
		while (++index < *nb_b)
			b[index] = b[index + 1];
		write(1, "pa\n", 3);
	}
}
